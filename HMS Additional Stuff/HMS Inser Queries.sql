Insert into RoomType values (1,'Ultra Suit',1,'King',10000);
Insert into RoomType values (2,'Suit',1,'King',7000);
Insert into RoomType values (3,'Suit',2,'Queen',7000);
Insert into RoomType values (4,'Regular Twin',2,'Twin',5000);
Insert into RoomType values (5,'Regular',1,'Twin',3000);

Insert into Rooms values (101,5);
Insert into Rooms values (102,4);
Insert into Rooms values (201,5);
Insert into Rooms values (301,2);
Insert into Rooms values (401,1);

Insert into Customer values (1,'TJ','79497949794','1111111111111');
Insert into Customer values (2,'AM','78647864786','2222222222222');
Insert into Customer values (3,'AJ','79037903790','3333333333333');
Insert into Customer values (4,'MK','79567956795','4444444444444');

--Need to add employee type in employees...
Alter table Employees add employeeType varchar(50);

Insert into Employees(employeeId,fname,lname,cnic,phoneNum,[password],employeeType) values (7949,'Takreem','Jaffery','1231231231231','01010101010','12345678','Admin'); --we have the same phone num idc
Insert into Employees(employeeId,fname,lname,cnic,phoneNum,[password],employeeType) values (7864,'Areeba','Mujahid','1212121212121','01010101010','12345678','Admin');
Insert into Employees(employeeId,fname,lname,cnic,phoneNum,[password],employeeType) values (7903,'Aneeza','Junaid','1234123412341','01010101010','12345678','Receptionist');
Insert into Employees(employeeId,fname,lname,cnic,phoneNum,[password],employeeType) values (7956,'Mehak','Khurram','1234512345123','01010101010','12345678','Receptionist');

declare @bkid varchar(6);
Execute generateBookingId @bookingId=@bkid output;
Insert into Booking values (@bkid,1,201,GETDATE(),'2024-05-15','2024-05-25');
declare @bkid varchar(6);
Execute generateBookingId @bookingId=@bkid output;
Insert into Booking values (@bkid,4,301,GETDATE(),'2024-05-15','2024-05-25');


declare @price float;
EXEC calculate_Payment '2024-05-15', '2024-05-25', 'Regular', @price OUTPUT
Insert into Payments values ('3A574B',1,@price,GETDATE(),'PAID'); --sorry im inserting these manually

Select * from RoomType;
Select * from Rooms;
Select * from Customer;
Select * from Employees;
Select * from Booking;
Select * from Payments;
Select * from [Audit];


--Additional Queries 6:43pm
declare @bkid varchar(6);
Execute generateBookingId @bookingId=@bkid output;
Insert into Booking values (@bkid,2,101,GETDATE(),'2024-05-17','2024-05-27');

Select * from Booking;
declare @price float;
EXEC calculate_Payment '2024-05-17', '2024-05-27', 'Regular', @price OUTPUT
Insert into Payments values ('958DA2',1,@price,GETDATE(),'PAID'); 

Update RoomType set roomType='Suit King' where roomType='Suit' and roomTypeId=2;
declare @price float;
EXEC calculate_Payment '2024-05-15', '2024-05-25', 'Suit', @price OUTPUT
Insert into Payments values ('74C0EE',1,@price,'2024-05-25','PAID'); 

Select * from payments;