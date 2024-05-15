--LOG IN
CREATE PROCEDURE EmployeeLogin
    @employeeId int,
    @password VARCHAR(8),
	@flag int output 
AS
BEGIN
    -- Check if the employee exists
    if exists (SELECT *
    FROM Employees
    WHERE employeeId = @employeeId AND password = @password)
		SET @flag = 1
	else
		SET @flag=0
END
GO

--SIGN UP
CREATE PROCEDURE EmployeeSignUp
    --@employeeid int,
	@fname varchar(100), @lname varchar(100),
	@cnic varchar(13),
	@phoneNum varchar(11),
    @password VARCHAR(8),
    @IsAdmin_EnterCode int,  -- Admin enters special code if they are signing up, can be entered as null otherwise
    @flag INT OUTPUT
AS
BEGIN
    DECLARE @id int
	if not exists (select * from Employees)
		SET @id= 1
	else 
		SET @id = (select MAX(employeeId)+1 from Employees)

	-- Insert new user into Employees table, wrong admin code will give a false flag
	if @IsAdmin_EnterCode = 1122 or @IsAdmin_EnterCode is null
		INSERT INTO Employees VALUES (@id, @fname, @lname, @cnic, @phoneNum, @password)

	--check insertion has successfully occured
	if exists (select * from Employees 
				where employeeId=@id and fname=@fname and lname=@lname
				and cnic=@cnic and phoneNum=@phoneNum and password=@password)
				SET @flag=1
	else
		SET @flag=0
END


CREATE PROCEDURE GetCustomSales
    @StartDate DATE,
    @EndDate DATE,
	@totalPrice float output
AS
BEGIN
    -- Calculate the total sales for the specified duration
	SELECT @TotalPrice = SUM(Amount)
    FROM Payments
    WHERE PaymentDate >= @StartDate AND PaymentDate <= @EndDate;
END
GO


----Per month sales
CREATE PROCEDURE GetMonthlySales
    @Month DATE, --format 'yyyy-mm-dd'
	@totalPrice float output
AS
BEGIN
    -- Calculate the total sales for the specified month
	SELECT @totalPrice = SUM(Amount)
    FROM Payments
	group by paymentDate
	having DATEPART(YEAR, paymentDate) = DATEPART(YEAR,@month) 
		AND DATEPART(month, paymentDate) = DATEPART(month, @month)
END
GO


use HotelManagementSystem;
GO

----------------Extra Helpful Procedures-------------------
CREATE PROCEDURE Check_RoomNum_Availability
@roomnum int,
@checkindate date,
@checkoutdate date,
@isavailable int OUTPUT
AS
BEGIN
	if exists (select * from Booking
		where roomNum=@roomNum and checkInDate >= @checkindate and
		checkOutDate <= @checkoutdate)
			SET @isavailable=0;
	else
		SET @isavailable=1;
END
GO

-----------Generate BookingID--------------
CREATE PROCEDURE generateBookingId
@bookingId varchar(6) OUTPUT
AS
BEGIN
	DECLARE @id varchar(6)
	DECLARE @counter int = 0

	while @counter < 10 --multiple attempts to ensure id is unique
	begin
		SET @id= substring(convert(varchar(255), newid()), 1,6)

		if not exists (select * from Booking where bookingID=@id)
		begin
			SET @bookingId=@id
			return 0
		end

		SET @counter = @counter + 1
	end
END
GO

----------------END OF Extra Helpful Procedures-------------------


----------------Edit Booking Procedures-------------------
create procedure Edit_Booking_RoomNum
@bookingid varchar(6),
@newRoomNum int,
--flag returns 0 for invalid booking, -1 for invalid roomnum, -2 for unavailable room, 1 for successful updation
@flag int OUTPUT
AS 
BEGIN
	DECLARE @roomAvailable int,
	@checkIn date, @checkout date
	if not exists (select * from Booking where bookingId=@bookingid)
		SET @flag=0
	else if not exists(select * from Rooms where roomNum=@newRoomNum )
		SET @flag=-1;
	else
	begin
		--retrieve current checkin checkout dates
		select @checkin=checkInDate, @checkout=checkOutDate 
		from Booking
		where bookingid=@bookingid
			
		--check if newroomNum is available in b/w current dates
		EXEC Check_RoomNum_Availability 
			@roomnum=@newRoomNum, 
			@checkindate=@checkin, 
			@checkoutdate=@checkout, 
			@isavailable=@roomAvailable OUTPUT
		if @roomAvailable=1
		begin
			Update Booking
			set roomNum=@newRoomNum
			where bookingId=@bookingid

			SET @flag=1;
		end
		else
			SET @flag=-2;
	end

END
GO

create procedure Edit_Booking_CheckinDate_CheckOutDate
@bookingid varchar(6),
@newCheckInDate date,
@newCheckOutDate date,
--flag returns 0 for invalid booking, -1 for null dates, -2 for unavailable room, 1 for successful updation
@flag int OUTPUT
AS 
BEGIN
	DECLARE @roomAvailable int, 
	@currentRoomnum int
	if not exists (select * from Booking where bookingId=@bookingid)
		SET @flag=0
	else if @newCheckInDate=null or @newCheckOutDate=null
		SET @flag=-1;
	else
		begin
			--retrieve current roomNum
			select @currentRoomnum=roomNum
			from Booking
			where bookingid=@bookingid
			
			--check if new dates are available for the current room
			EXEC Check_RoomNum_Availability 
				@roomnum=@currentRoomNum, 
				@checkindate=@newCheckInDate, 
				@checkoutdate=@newCheckOutDate, 
				@isavailable=@roomAvailable OUTPUT
			if @roomAvailable=1
			begin
				Update Booking
				set checkInDate=@newCheckInDate, checkOutDate=@newCheckOutDate
				where bookingId=@bookingid

				SET @flag=1;
			end
			else
				SET @flag=-2;
		end
END
GO

create procedure Edit_Booking_RoomAndDate
@bookingid varchar(6),
@newRoomNum int,
@newCheckInDate date,
@newCheckOutDate date,
--flag returns 0 for invalid booking, -1 for invalid roomnum/date, -2 for unavailable room, 1 for successful updation
@flag int OUTPUT
AS 
BEGIN
	DECLARE @roomAvailable int
	if not exists (select * from Booking where bookingId=@bookingid)
		SET @flag=0
	else if not exists(select * from Rooms where roomNum=@newRoomNum ) or
			@newCheckInDate=null or @newCheckOutDate=null
		SET @flag=-1;
	else
	begin
		--check if new data availability
		EXEC Check_RoomNum_Availability 
			@roomnum=@newRoomNum, 
			@checkindate=@newCheckInDate,
			@checkoutdate=@newCheckOutDate,
			@isavailable=@roomAvailable OUTPUT
		if @roomAvailable=1
		begin
			Update Booking
			set roomNum=@newRoomNum,
			checkInDate=@newCheckInDate, 
			checkOutDate=@newCheckOutDate
			where bookingId=@bookingid

			SET @flag=1;
		end
			else
				SET @flag=-2;
	end

END
GO

----------------END OF Edit Booking Procedures-------------------


----------------Cancel Booking Procedure-------------------
CREATE PROCEDURE Cancel_Booking
@bookingId varchar(6),
@flag int output -- -1 booking does not exist, 1 successful deletion
as
BEGIN
	if exists(select * from booking where bookingId=@bookingId)
	begin
		delete from Booking
		where bookingId=@bookingId

		SET @flag=1
	end
	else
		SET @flag=-1;
END
GO
----------------END OF Cancel Booking Procedure-------------------

-----------------Room Booking Count-------------------
CREATE PROCEDURE Analytics_Booking
@roomNum int,
@count int output
as
BEGIN
	if exists(select * from booking where roomNum=@roomNum)
	begin
		SET @count= (select Count(*)
			from Booking
			where roomNum=@roomNum)
	end
	else
		SET @count=-1
END
GO
-----------------END OF Room Booking Count-------------------



use HotelManagementSystem;

---------------Audit Triggers on all Tables--------------
create trigger AuditBooking
on Booking
after insert, update, delete
as
begin
	DECLARE @id int
	if exists (select auditId from [Audit])
		SET @id=(select Max(auditId)+1 from [Audit])
	else 
		SET @id=1

    if exists (select * from inserted) and not exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Booking', 'INSERT');
    else if exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Booking', 'UPDATE');
    else if not exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Booking', 'DELETE');
end
GO

create trigger AuditCustomer
on Customer
after insert, update, delete
as
begin
	DECLARE @id int
	if exists (select auditId from [Audit])
		SET @id=(select Max(auditId)+1 from [Audit])
	else 
		SET @id=1

    if exists (select * from inserted) and not exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Customer', 'INSERT');
    else if exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Customer', 'UPDATE');
    else if not exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Customer', 'DELETE');
end
GO

create trigger AuditEmployees
on Employees
after insert, update, delete
as
begin
	DECLARE @id int
	if exists (select auditId from [Audit])
		SET @id=(select Max(auditId)+1 from [Audit])
	else 
		SET @id=1

    if exists (select * from inserted) and not exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Employees', 'INSERT');
    else if exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Employees', 'UPDATE');
    else if not exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Employees', 'DELETE');
end
GO

create trigger AuditPayments
on Payments
after insert, update, delete
as
begin
	DECLARE @id int
	if exists (select auditId from [Audit])
		SET @id=(select Max(auditId)+1 from [Audit])
	else 
		SET @id=1

    if exists (select * from inserted) and not exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Payments', 'INSERT');
    else if exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Payments', 'UPDATE');
    else if not exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Payments', 'DELETE');
end
GO

create trigger AuditRooms
on Rooms
after insert, update, delete
as
begin
	DECLARE @id int
	if exists (select auditId from [Audit])
		SET @id=(select Max(auditId)+1 from [Audit])
	else 
		SET @id=1

    if exists (select * from inserted) and not exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Rooms', 'INSERT');
    else if exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Rooms', 'UPDATE');
    else if not exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'Rooms', 'DELETE');
end
GO

create trigger AuditRoomType
on RoomType
after insert, update, delete
as
begin
	DECLARE @id int
	if exists (select auditId from [Audit])
		SET @id=(select Max(auditId)+1 from [Audit])
	else 
		SET @id=1

    if exists (select * from inserted) and not exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'RoomType', 'INSERT');
    else if exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'RoomType', 'UPDATE');
    else if not exists (select * from inserted) and exists (select * from deleted)
        INSERT INTO [Audit] VALUES (@id, GETDATE(), 'RoomType', 'DELETE');
end
GO

-----------------End of Audit Triggers------------------ 

-------------DDL Trigger (TO BE EXECUTED AT THE END)-----
create trigger DDL_Trigger
on DATABASE
for DROP_TABLE, ALTER_TABLE
as
begin
	print 'Unable to alter or drop table. To Enable, disable <DDL_Trigger>'
end
GO
--------------------------------------------------------

CREATE PROCEDURE generateBookingId
@bookingId varchar(6) OUTPUT
AS
BEGIN
	DECLARE @id varchar(6)
	DECLARE @counter int = 0

	while @counter < 10 --multiple attempts to ensure id is unique
	begin
		SET @id= substring(convert(varchar(255), newid()), 1,6)

		if not exists (select * from Booking where bookingID=@id)
		begin
			SET @bookingId=@id
			return 0
		end

		SET @counter = @counter + 1
	end
END
GO


create procedure INSERT_customer
@customer_id int,
@name varchar(100),
@contact varchar(11),
@CNIC varchar(13)
AS
BEGIN
insert into Customer
		values(@customer_id, @name,@contact,@CNIC)--inserting customer record
END


CREATE PROCEDURE check_Availability
    @roomtype VARCHAR(50),
    @noOfBed INT,
    @bedType VARCHAR(50),
    @check_in_date DATE,
    @check_out_date DATE,
    @flag BIT OUTPUT,
    @roomnum INT OUTPUT
AS
BEGIN
    IF EXISTS (
        SELECT TOP 1 r.roomNum
        FROM Rooms r
        LEFT JOIN Booking b ON r.roomNum = b.roomNum
        LEFT JOIN RoomType t ON r.roomTypeId = t.roomTypeId
        WHERE r.roomNum NOT IN (
                SELECT b.roomNum
                FROM Booking b
                WHERE NOT (
                        @check_out_date <= b.checkInDate
                        OR @check_in_date >= b.checkOutDate
                    )
            )
            AND t.roomType = @roomtype
            AND t.noOfBeds = @noOfBed
            AND t.bedType = @bedType
        ORDER BY r.roomNum
    )
    BEGIN
        SET @flag = 1;
        SET @roomnum = (
            SELECT TOP 1 r.roomNum
            FROM Rooms r
            LEFT JOIN Booking b ON r.roomNum = b.roomNum
            LEFT JOIN RoomType t ON r.roomTypeId = t.roomTypeId
            WHERE r.roomNum NOT IN (
                    SELECT b.roomNum
                    FROM Booking b
                    WHERE NOT (
                            @check_out_date <= b.checkInDate
                            OR @check_in_date >= b.checkOutDate
                        )
                )
                AND t.roomType = @roomtype
                AND t.noOfBeds = @noOfBed
                AND t.bedType = @bedType
            ORDER BY r.roomNum
        );
        PRINT 'Room available';
    END
    ELSE
    BEGIN
        SET @flag = 0;
        SET @roomnum = NULL;
        PRINT 'Room not available';
    END;
END;

create procedure room_reservation
@room_type varchar(50),
@no_of_beds int,
@bed_type varchar(50),
@check_in_date date,
@check_out_date date,
@customer_name varchar(50),
@contact varchar(11),
@CNIC varchar(13)
AS
BEGIN
DECLARE @output_flag Bit, @room_nums int, @booking_id varchar(6), @customer_id int
EXEC check_availability @room_type, @no_of_beds, @bed_type,
     @check_in_date, @check_out_date, @output_flag output, @room_nums output
IF(@output_flag = 1)
		BEGIN

		SET @customer_id = (select c.customerId      --checking if customer already exists in database
        FROM Customer c
		WHERE c.name = @customer_name and c.contact = @contact 
		AND c.cnic = @CNIC)

	    IF(@customer_id is null)
		BEGIN
			SET @customer_id = (select top 1 c.customerId      --checking if customer already exists in database
			FROM Customer c
			ORDER BY c.customerId desc) +1
			EXEC INSERT_customer @customer_id,@customer_name,@contact,@CNIC
		END

		EXEC generateBookingId @booking_id output
		INSERT INTO booking
		VALUES(@booking_id,@customer_id,@room_nums,GETDATE(),@check_in_date,@check_out_date)
PRINT 'booking done\n'
--adding payment
DECLARE @price FLOAT
		EXEC calculate_Payment @check_in_date, @check_out_date, @room_type, @price OUTPUT
		EXEC insert_payment @booking_id, @customer_id,@price
		END

ELSE
		print 'booking not possible'
END
-------------------------------------------------------
create procedure insert_payment
@booking_id int,
@customer_id int,
@price float
AS
BEGIN
insert into Payments
	values(@booking_id,@customer_id,@price,GETDATE(),'UNPAID')
END
-------------------------------------------------------

create procedure calculate_Payment
@check_in_date date,
@check_out_date date,
@room_type varchar(50),
@price float output
AS
BEGIN
declare @num_of_days int
set @num_of_days = DATEDIFF(day, @check_in_date, @check_out_date)
set @price = (select r.price 
             from RoomType r
			 where r.roomType = @room_type) * @num_of_days
END


--ROOMS AND ROOMTYPE--
--Select * from RoomType;
Create Procedure roomTypeAddition 
@RoomType varchar(50),
@NoOfBeds int,
@BedType varchar(50),
@Price float,
@flag int output
as
BEGIN
declare @RoomID int
if (Select max(roomTypeId) from RoomType) is not null
	begin
	set @RoomID=(Select max(roomTypeId)+1 from RoomType)
	end
else
	begin
	set @RoomID=1;
	end
if @RoomType is null or @NoOfBeds is null or @BedType is null or @Price is null
	begin
	set @flag=1 --Error 1: "No null values allowed"
	end
else if @NoOfBeds<=0
	begin
	set @flag =2 --Error 2: "No of beds cant be 0 or negative"
	end
else if @Price<=0
	begin
	set @flag=3 --Error 3: "Price cant be 0 or negative"
	end
else
	begin
	Insert into RoomType values (@RoomID,@RoomType,@NoOfBeds,@BedType,@Price);
	set @flag = 0 -- no issues
	end
END

--running--
/*declare @output int
execute roomTypeAddition @RoomType=null,@NoOfBeds=null,@BedType=null,@Price=null,@flag=@output output
select @output as flag

declare @output int
execute roomTypeAddition @RoomType='Ultra Suit',@NoOfBeds=1,@BedType='King',@Price=200,@flag=@output output
select @output as flag

declare @output int
execute roomTypeAddition @RoomType='Suit',@NoOfBeds=0,@BedType='Queen',@Price=150,@flag=@output output
select @output as flag

declare @output int
execute roomTypeAddition @RoomType='Suit',@NoOfBeds=1,@BedType='Queen',@Price=-200,@flag=@output output
select @output as flag

declare @output int
execute roomTypeAddition @RoomType='Suit',@NoOfBeds=1,@BedType='Queen',@Price=150,@flag=@output output
select @output as flag
select * from RoomType
*/

--Select * from Rooms
Create Procedure roomAddition
@roomnum int,
@roomtype int,
@flag int output
as
BEGIN
if @roomnum is null or @roomtype is null
	begin
	set @flag=1 --Error 1: "No null values allowed"
	end
else if @roomnum<=100
	begin
	set @flag =2 --Error 2: "Room num starts from 101 onwards (first digit reps floor, the rest rep roomnum"
	end
else if @roomtype!=all(select roomtypeid from RoomType)
	begin
	set @flag=3 --Error 3: "Room type referenced doesnt exist"
	end
else
	begin
	Insert into Rooms values (@roomnum,@roomtype);
	set @flag = 0 -- no issues
	end
END

--I'm running--
/*declare @output int
execute roomAddition @roomnum=null,@roomtype=null,@flag=@output output
select @output as flag

declare @output int
execute roomAddition @roomnum=100,@roomtype=2,@flag=@output output
select @output as flag

declare @output int
execute roomAddition @roomnum=101,@roomtype=3,@flag=@output output
select @output as flag

declare @output int
execute roomAddition @roomnum=101,@roomtype=2,@flag=@output output
select @output as flag
select * from rooms*/

Create Procedure deleteRoomType
@RoomTypeID int,
@flag int output
as
BEGIN
if @RoomTypeID=any(Select roomtypeid from RoomType)
	begin
	delete from RoomType where roomTypeId=@RoomTypeID
	set @flag=0 --no issues
	end
else
	begin
	set @flag=1 --RoomTypeID entered doesnt exist in table
	end
END

--running--
/*declare @output int
execute deleteRoomType @RoomTypeID=5, @flag=@output output
select @output as flag

declare @output int
execute roomTypeAddition @RoomType='Double',@NoOfBeds=2,@BedType='Queen',@Price=200,@flag=@output output
select @output as flag

declare @output int
execute deleteRoomType @RoomTypeID=3, @flag=@output output
select @output as flag
select * from RoomType*/

Create Procedure deleteRoom
@RoomNum int,
@flag int output
as
BEGIN
if @RoomNum=any(Select roomNum from Rooms)
	begin
	delete from Rooms where roomNum=@RoomNum
	set @flag=0 --no issues
	end
else
	begin
	set @flag=1 --RoomNum entered doesnt exist in table
	end
END

--testing--
/*declare @output int
execute deleteRoom @RoomNum=5, @flag=@output output
select @output as flag

declare @output int
execute roomAddition @roomnum=102,@roomtype=2,@flag=@output output
select @output as flag

declare @output int
execute deleteRoom @RoomNum=102, @flag=@output output
select @output as flag
select * from Rooms*/

select * from RoomType
Create Procedure updateRoomType
@roomID int,
@roomType varchar(50),
@noOfBeds int,
@bedType varchar(50),
@price float,
@flag int output
as
BEGIN
--user can choose to update one or multiple of each attribute
--OTHER THAN ROOMTYPEIDS
if @roomID!= all(select roomtypeid from RoomType)
	begin
	set @flag=1 --Error 1: roomId attempting to edit doesnt exist
	end
else
	begin
	set @flag=0; --setting it 0 in the beginning, if no issues it should return such
	if @roomType is not null --meaning its to be updated
		begin
		update RoomType set roomType=@roomType where roomTypeId=@roomID
		end
	if @noOfBeds is not null and @noOfBeds>0
		begin
		update RoomType set noOfBeds=@noOfBeds where roomTypeId=@roomID
		end
	else if @noOfBeds<=0
		begin
		set @flag =2; --Error 2: No of beds entered cant be 0 or negative
		end
	if @bedType is not null
		begin
		update RoomType set bedType=@bedType where roomTypeId=@roomID
		end
	if @price is not null and @price>0
		begin
		update RoomType set price=@price where roomTypeId=@roomID
		end
	else if @price<=0
		begin
		set @flag = 3 --Error 3: price cant be 0 or negative
		end
	end
END

--testing--
/*declare @output int
execute updateRoomType @roomID=0,@RoomType=null,@NoOfBeds=null,@BedType=null,@Price=null,@flag=@output output
select @output as flag

declare @output int
execute updateRoomType @roomID=1,@RoomType=null,@NoOfBeds=null,@BedType=null,@Price=500,@flag=@output output
select @output as flag
select * from RoomType

declare @output int
execute updateRoomType @roomID=1,@RoomType=null,@NoOfBeds=0,@BedType=null,@Price=null,@flag=@output output
select @output as flag
select * from RoomType

declare @output int
execute updateRoomType @roomID=1,@RoomType='ULTRA Suit',@NoOfBeds=2,@BedType=null,@Price=550,@flag=@output output
select @output as flag
select * from RoomType*/

select * from rooms
Create Procedure updateRoom
@roomnum int,
@roomtype int,
@flag int output
as
BEGIN
--can only update roomTypeId here
if @roomnum!=all(select roomnum from Rooms)
	begin
	set @flag=1 --Error 1: RoomNum being updated doesnt exist
	end
else
	begin
	set @flag = 0;
	if @roomtype is not null and @roomtype!=all(select roomtypeid from RoomType)
		begin
		set @flag=2 --Error 2: room type being referred to doesnt exist
		end
	else if @roomtype is not null
		begin
		update Rooms set roomTypeId=@roomtype where roomNum=@roomnum
		end
	--it'll return flag=0 if its null because if theres nothing to update, thats not an error, it just wont update
	end
END

--testing--
/*declare @output int
execute updateRoom @roomnum=5,@roomtype=1, @flag=@output output
select @output as flag
select * from rooms

declare @output int
execute updateRoom @roomnum=101,@roomtype=null, @flag=@output output
select @output as flag
select * from rooms

declare @output int
execute updateRoom @roomnum=101,@roomtype=1, @flag=@output output
select @output as flag
select * from rooms*/

--EMPLOYEES--
select * from employees
Create Procedure updateEmployee
@employeeId int,
@fname varchar(100),
@lname varchar(100),
@cnic varchar(13),
@phoneNum varchar(11),
@password varchar(8),
@flag int output
as
BEGIN
--updating everything but employeeId
if @employeeId is null
	begin
	set @flag = 1 --Invalid employeeID referenced
	end
else
	begin
	set @flag=0
	if @fname is not null
		begin
		update Employees set fname=@fname where employeeId=@employeeId
		end
	if @lname is not null
		begin
		update Employees set lname=@lname where employeeId=@employeeId
		end
	if @cnic is not null
		begin
		update Employees set cnic=@cnic where employeeId=@employeeId
		end
	if @phoneNum is not null
		begin
		update Employees set phoneNum=@phoneNum where employeeId=@employeeId
		end
	if @password is not null
		begin
		update Employees set password=@password where employeeId=@employeeId
		end
	end
END

Create Procedure deleteEmployee
@employeeId int,
@flag int output
as
BEGIN
if @employeeId!=all(select employeeId from Employees)
	begin
	set @flag = 1 --Error 1: employeeId trying to delete doesnt exist
	end
else
	begin
	delete from Employees where employeeId=@employeeId
	set @flag=0
	end
END

--TRIGGER--
Create Trigger trg_stop_bookingId_updt on Booking
after update
as
BEGIN
if UPDATE(bookingId)
	begin
	print 'You cant update the primary key of this table'
	rollback transaction
	end
END

--testing--
/*Insert into Booking values ('US1000',1,101,21-4-2024,12-4-2025,30-4-2025);
Update Booking set bookingId='UK1000' where bookingId='US1000'
*/

Create Trigger trg_stop_customerId_updt on Customer
after update
as
BEGIN
if UPDATE(customerId)
	begin
	print 'You cant update the primary key of this table'
	rollback transaction
	end
END

--testing--
/*select * from Customer
Insert into Customer values (1,'Takreem Jaffery',10101010101,1111222233334);
Update Customer set customerId=2 where customerId=1;
*/

/*-----------------------------New Procedures---------------------------------------*/
create procedure GetUnpaidBookings
as
begin
	select b.*
	from Booking b join Payments p 
	on b.bookingId=p.bookingId
	where p.status='UNPAID' or p.status='unpaid'
end
go
----------------Cancel Booking Procedure-------------------
ALTER PROCEDURE Cancel_Booking
@bookingId varchar(6),
@flag int output -- -1 booking does not exist, 1 successful deletion
as
BEGIN
	if exists(select * from booking where bookingId=@bookingId)
	begin
		if exists(select * from payments where bookingId=@bookingId and status like 'unpaid')
		BEGIN
			delete from Payments
			where bookingId=@bookingId

			delete from Booking
			where bookingId=@bookingId

			SET @flag=1
		END
	end
	else
		SET @flag=-1;
END
GO
----------------END OF Cancel Booking Procedure-------------------

alter procedure Edit_Booking_RoomAndDate
@bookingid varchar(6),
@newRoomNum int,
@newCheckInDate date,
@newCheckOutDate date,
--flag returns 0 for invalid booking, -1 for invalid roomnum/date, -2 for unavailable room, 1 for successful updation
@flag int OUTPUT
AS 
BEGIN
	DECLARE @roomAvailable int,@roomTypeId int, @roomType varchar(50), @amount float
	if not exists (select * from Booking where bookingId=@bookingid)
		SET @flag=0
	else if not exists(select * from Rooms where roomNum=@newRoomNum ) or
			@newCheckInDate=null or @newCheckOutDate=null
		SET @flag=-1;
	else
	begin
		--check if new data availability
		EXEC Check_RoomNum_Availability 
			@roomnum=@newRoomNum, 
			@checkindate=@newCheckInDate,
			@checkoutdate=@newCheckOutDate,
			@isavailable=@roomAvailable OUTPUT
		if @roomAvailable=1
		begin
		select @roomTypeID=roomTypeId from Rooms where roomNum=@newRoomNum
		select @roomType=roomType from RoomType where roomtypeid=@roomTypeId
			EXEC calculate_Payment @check_in_date=@newCheckInDate, @check_out_date=@newcheckOutDate,@room_type=@roomType, @price=@amount OUTPUT

			Update Booking
			set roomNum=@newRoomNum,
			checkInDate=@newCheckInDate, 
			checkOutDate=@newCheckOutDate
			where bookingId=@bookingid

			Update Payments
			set amount=@amount,
			paymentDate=GETDATE()
			where bookingId=@bookingid

			SET @flag=1;
		end
			else
				SET @flag=-2;
	end

END
GO
----------------END OF Edit Booking Procedures-------------------

--- ADD CUSTOMER CHANGES:: VER 2----
use HotelManagementSystem
go
create procedure INSERT_INTO_CUSTOMER
@name varchar(100),
@contact varchar(11),
@CNIC varchar(13)
AS
BEGIN
DECLARE @id int
	if exists (select customerID from [Customer])
		SET @id=(select Max(customerId)+1 from [Customer])
	else 
		SET @id=1
insert into Customer
		values(@id, @name,@contact,@CNIC)--inserting customer record
END
GO

create procedure UPDATE_SET_CUSTOMER
@customerid int,
@name varchar(100),
@contact varchar(11),
@CNIC varchar(13)
AS
BEGIN
	UPDATE Customer
	SET name=@name, contact=@contact, cnic=@CNIC
	where customerId=@customerid
END
GO

create procedure DELETE_FROM_CUSTOMER
@customerid int
AS
BEGIN
	DELETE FROM Customer
	WHERE customerId=@customerid
END
GO

Alter table Payments drop constraint FK_paymentsCustomerId;
Alter table Payments add constraint FK_paymentsCustomerId foreign key(customerId) references Customer(customerid) on update no action on delete cascade;


CREATE PROCEDURE find_Rooms
    @roomtype VARCHAR(50),
	@PRICE FLOAT,
   -- @noOfBed INT,
    --@bedType VARCHAR(50),
    @check_in_date DATE,
    @check_out_date DATE
   -- @flag BIT OUTPUT
    --@roomnum INT OUTPUT
AS
BEGIN
    --IF EXISTS (
        SELECT r.roomNum, t.roomType, t.noOfBeds, t.bedType,t.price
        FROM Rooms r
        LEFT JOIN Booking b ON r.roomNum = b.roomNum
        LEFT JOIN RoomType t ON r.roomTypeId = t.roomTypeId
        WHERE r.roomNum NOT IN (
                SELECT b.roomNum
                FROM Booking b
                WHERE NOT (
                        @check_out_date <= b.checkInDate
                        OR @check_in_date >= b.checkOutDate
                    )
            )
            AND t.roomType = @roomtype AND T.price <= @PRICE
            --AND t.noOfBeds = @noOfBed
            --AND t.bedType = @bedType
        ORDER BY r.roomNum
    --)
    --BEGIN
    --    SET @flag = 1;
    --    --SET @roomnum = (
    --        SELECT r.roomNum, t.roomType, t.noOfBeds, t.bedType,t.price
    --        FROM Rooms r
    --        LEFT JOIN Booking b ON r.roomNum = b.roomNum
    --        LEFT JOIN RoomType t ON r.roomTypeId = t.roomTypeId
    --        WHERE r.roomNum NOT IN (
    --                SELECT b.roomNum
    --                FROM Booking b
    --                WHERE NOT (
    --                        @check_out_date <= b.checkInDate
    --                        OR @check_in_date >= b.checkOutDate
    --                    )
    --            )
    --            AND t.roomType = @roomtype AND T.price <= @PRICE
               -- AND t.noOfBeds = @noOfBed
                --AND t.bedType = @bedType
          --  ORDER BY r.roomNum
        --);
        PRINT 'Room available';
    --END
    --ELSE
    --BEGIN
    --    SET @flag = 0;
    --    --SET @roomnum = NULL;
    --    PRINT 'Room not available';
    --END;
END;

alter procedure room_reservation
@room_nums int,
@room_type varchar(50),
@PRICES FLOAT,
--@no_of_beds int,
--@bed_type varchar(50),
@check_in_date date,
@check_out_date date,
@customer_name varchar(50),
@contact varchar(11),
@CNIC varchar(13), 
@flag int output
AS
BEGIN
DECLARE @output_flag Bit, @booking_id varchar(6), @customer_id int
--EXEC check_availability @room_type, @PRICES,--@no_of_beds, @bed_type,
--     @check_in_date, @check_out_date
--	 --, @output_flag output, @room_nums output
--IF(@output_flag = 1)
--		BEGIN

		SET @customer_id = (select c.customerId      --checking if customer already exists in database
        FROM Customer c
		WHERE c.name = @customer_name and c.contact = @contact 
		AND c.cnic = @CNIC)

	    IF(@customer_id is null)
		BEGIN
			SET @customer_id = (select top 1 c.customerId      --checking if customer already exists in database
			FROM Customer c
			ORDER BY c.customerId desc) +1
			EXEC INSERT_customer @customer_id,@customer_name,@contact,@CNIC
		END

		EXEC generateBookingId @booking_id output
		INSERT INTO booking
		VALUES(@booking_id,@customer_id,@room_nums,GETDATE(),@check_in_date,@check_out_date)
PRINT 'booking done\n'
--adding payment
DECLARE @price FLOAT
		EXEC calculate_Payment @check_in_date, @check_out_date, @room_type, @price OUTPUT
		EXEC insert_payment @booking_id, @customer_id,@price
		--END
		IF exists(select * from Booking b where b.bookingId = @booking_id AND B.customerId = @customer_id AND
		B.roomNum = @room_nums AND reservationDate = GETDATE() AND B.checkInDate = @check_in_date AND B.checkOutDate = @check_out_date)
		SET @flag = 1;
		ELSE
		SET @flag = 0;
--ELSE
--		print 'booking not possible'
END
-------------------------------------------------------
create procedure view_payments
AS
BEGIN
SELECT distinct P.customerid FROM PAYMENTS P WHERE P.STATUS = 'UNPAID' 
END

create procedure view_bookings
AS
BEGIN
select b.bookingid from booking b join payments p on b.bookingid = p.bookingid
where p.status = 'UNPAID'
END

CREATE PROCEDURE mark_paid
    @bookingid VARCHAR(6),
    @customerid INT
AS
BEGIN
    UPDATE Payments
    SET status = 'PAID'
    WHERE bookingid = @bookingid AND customerid = @customerid;
END

CREATE PROCEDURE GET_CUSTOMERS
@CUSTOMERID INT
AS 
BEGIN
SELECT B.bookingId,C.customerId, C.name,P.amount FROM Payments P JOIN 
Booking B ON P.bookingId = B.bookingId
JOIN Customer C
ON C.customerId = B.customerId
WHERE P.STATUS = 'UNPAID' AND C.customerId = @CUSTOMERID
END

alter procedure insert_payment
@booking_id varchar(6),
@customer_id int,
@price float
AS
BEGIN
insert into Payments
	values(@booking_id,@customer_id,@price,GETDATE(), 'UNPAID')
END
-------------------------------------------------------
select * from booking
create procedure fetch_info
@bookingid varchar(6)
AS
BEGIN
SELECT c.customerId, c.name , t.roomType, p.amount, b.checkInDate, b.checkOutDate from booking b join customer c on b.customerid = c.customerid
join Payments p on p.customerid = c.customerid join Rooms r on r.roomnum = b.roomNum join RoomType t on r.roomtypeid = t.roomTypeId
END

select * from roomtype
alter procedure calculate_Payment
@check_in_date date,
@check_out_date date,
@room_type varchar(50),
@price float output
AS
BEGIN
declare @num_of_days int
set @num_of_days = DATEDIFF(day, @check_in_date, @check_out_date)
set @price = (select r.price 
             from RoomType r
			 where r.roomType = @room_type) * @num_of_days
END;