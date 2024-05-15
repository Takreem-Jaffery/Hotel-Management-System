create database HotelManagementSystem;
use HotelManagementSystem;

create table RoomType(
roomTypeId int,
roomType varchar(50) not null,
noOfBeds int not null,
bedType varchar(50) not null,
price float not null,
constraint PK_roomtypeId primary key(roomTypeId),
constraint CHECK_price check (price>0)
);

create table Rooms(
roomNum int,
roomTypeId int not null,
occupancyStatus int not null,
constraint PK_roomNum primary key(roomNum),
constraint FK_roomsRoomtypeID foreign key(roomTypeId) references RoomType(roomTypeId)
);


create table Customer(
customerId int,
name varchar(100) not null,
contact varchar(11) not null,
cnic varchar(13) not null, --no dashes included
constraint PK_customerID primary key(customerId),
constraint CHECK_cnic check (TRANSLATE(cnic, '0123456789', '') = ''), -- checks that cnic has digits only
constraint CHECK_contact check (TRANSLATE(contact, '0123456789', '') = '') --may include these only
);

create table Booking(
bookingId int,
customerId int,
roomNum int not null,
reservationDate date not null,
checkInDate date not null,
checkOutDate date not null,
constraint PK_bookingId primary key(bookingId),
constraint FK_bookingCustomerId foreign key (customerId) references Customer(customerId),
constraint FK_bookingRoomNum foreign key (roomNum) references Rooms(roomNum),
constraint CHECK_date check (checkOutDate > checkInDate and checkInDate >= reservationDate) 
);

create table Payments(
bookingId int,
customerId int,
amount float not null,
paymentDate date not null,
constraint PK_payments primary key(bookingId,customerId),
constraint FK_paymentsBookingId foreign key(bookingId) references Booking(bookingId),
constraint FK_paymentsCustomerId foreign key(customerId) references Customer(customerid),
constraint CHECK_amount check (amount>0)
);

create table Employees(
employeeId int,
fname varchar(100) not null,
lname varchar(100),
cnic varchar(13) not null,
phoneNum varchar(11) not null,
password varchar(8) not null,--eight character length only
constraint PK_employeeId primary key(employeeId),
constraint CHECK_emp_cnic check (TRANSLATE(cnic, '0123456789', '') = ''), 
constraint CHECK_phoneNum check (TRANSLATE(phoneNum, '0123456789', '') = ''), 
);

Alter table Rooms add constraint CHECK_occupancystatus check(occupancystatus = 0 or occupancystatus= 1);
Alter table Booking add noOfCustomers int;
Alter table Booking add constraint DEFAULT_noOfCustomers default 1 for NoOfCustomers;
Alter table Customer drop constraint CHECK_cnic;
Alter table Customer drop constraint CHECK_contact;
Alter table Employees drop constraint CHECK_emp_cnic;
Alter table Employees drop constraint CHECK_phoneNum;
Alter table Customer add constraint CHECK_cnic check (cnic NOT LIKE '%[^0-9]%');
Alter table Customer add constraint CHECK_contact check (contact NOT LIKE '%[^0-9]%');
Alter table Employees add constraint CHECK_emp_cnic check (cnic NOT LIKE '%[^0-9]%');
Alter table Employees add constraint CHECK_phoneNum check (phoneNum NOT LIKE '%[^0-9]%');

create table Audit(
auditId int,
dated date not null,
tableChanged varchar(20) not null,
operation varchar(20) not null,
constraint PK_auditId primary key(auditId)
);

Drop table Payments;
Drop table Booking;

create table Booking(
bookingId varchar(6),
customerId int not null,
roomNum int not null,
reservationDate date not null,
checkInDate date not null,
checkOutDate date not null,
constraint PK_bookingId primary key(bookingId),
constraint FK_bookingCustomerId foreign key (customerId) references Customer(customerId),
constraint FK_bookingRoomNum foreign key (roomNum) references Rooms(roomNum),
constraint CHECK_date check (checkOutDate > checkInDate and checkInDate >= reservationDate) 
);

create table Payments(
bookingId varchar(6),
customerId int not null,
amount float not null,
paymentDate date not null,
constraint PK_payments primary key(bookingId,customerId),
constraint FK_paymentsBookingId foreign key(bookingId) references Booking(bookingId),
constraint FK_paymentsCustomerId foreign key(customerId) references Customer(customerid),
constraint CHECK_amount check (amount>0)
);

ALTER TABLE Employees add constraint CHECK_password_len check(LEN(password)=8);
ALTER TABLE Rooms drop constraint CHECK_occupancyStatus;
ALTER TABLE Rooms drop column occupancyStatus;