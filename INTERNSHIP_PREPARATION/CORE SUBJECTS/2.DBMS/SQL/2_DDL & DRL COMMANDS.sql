CREATE DATABASE temp;

USE temp;

--      DDL CONSTRAINTS

 
 --  1- PRIMARY KEY CONSTRAINTS
 -- NOT NULL
--  UNIQUE
--  ONLY ONE PRIMARY KEY PER TABLE 


-- Good Pratice - Keep Primary Key always INT ( use karna fast hota hai )
CREATE TABLE Customer (

	id INT PRIMARY KEY,
    cname varchar(225),
    Address varchar(225),
    Gender char(2),
    City varchar(225),
    Pincode integer
    );
-- ------------------------------------------------------------ 
-- DML ( Data Manipulation Languauge )


-- 1. INSERT

INSERT INTO Customer( id,cname,Address,Gender,City,Pincode)
VALUES (1251, 'Ram Kumar' , 'Dilbagh Nagar', 'M','Jalandar',144892),
(1300, 'Shayam Singh ' , 'Ludhiyana H.o ', 'M','Ludhiana',141001),
(245, 'Neelabh Shukla ' , 'Ashok Nagar', 'M','Jalandar',144003),
(210, 'Barkha Singh' , 'Dilbagh Nagar', 'F','Jalandar',144002),
(500, 'Rohan Arora' , 'Ludhiana H.o', 'M','Lushiana',141001);

SELECT * from Customer;

insert into Customer values (1,'codehelp','delhi','H','Delhi','11000')
;

insert into Customer (id,cname) values (121,'Bob');


-- 2. UPDATE
UPDATE Customer SET Address= 'Mumbai', Gender='M' WHERE id=121;

-- 3. UPDATE MULTIPLE ROWS
SET SQL_SAFE_UPDATES=0;
UPDATE customer SET Pincode =110000;
UPDATE customer SET Pincode =Pincode+1;

-- DELEETE 
DELETE FROM Customer where id=121;

DELETE FROM Customer;
------------------------------------------------------------ 
 --  2- FORIEGN KEY CONSTRAINTS
CREATE TABLE Order_details(
	Order_id integer PRIMARY KEY,
    delievery_date DATE,
    cust_id INT,
    FOREIGN KEY (cust_id) references Customer(id)
);


 --  3- UNIQUE CONSTRAINTS
--   4 - CHECK CONSTRAINTS 
 create table account(
 id int primary key,
 name varchar(255) unique,
 balance int not null default 0
--  constraint acc_balance_chk check (balance >1000)
 );
 
--  insert into account (id,name , balance)
--  values (1,'A',10000);
--  
--   insert into account (id,name , balance)
--  values (3,'B',100000);
 
 DROP table account;
 
insert into account (id,name )
values (1,'A');

select * from account;


-- #### 7 ALTER OPERATIONS

--  2. Add new column
alter table account add interests float not null default 0;


-- 3. Modify Columns
alter table account modify interests double not null default 0;

 
select * from account;


-- desc account;(Describe account - tell fields, types,null 
desc account;
 
 
 
-- 4. Change column - Rename the column
-- lets change again to float
alter table account change column interests saving_interest
 float not null default 0;



-- 5. Drop Column
alter table account drop column saving_interest;


-- 6. Rename the table  
alter table account rename to account_details;







-- ------------------------------------------------------------ 
SHOW DATABASES;
USE ORG;

CREATE TABLE WORKER(
	WORKER_ID INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    FIRST_NAME CHAR(25),
    LAST_NAME CHAR(25),
    SALARY INT(15),
    JONING_DATE DATETIME,
    DEPARTMENT CHAR(25)
);

-- SELECT * FROM WORKER;

INSERT INTO WORKER(
	WORKER_ID,FIRST_NAME,LAST_NAME,SALARY,JONING_DATE,DEPARTMENT) VALUES
    (001     , 'MONIKA' , 'ARORA' , 100000, '14-02-20 09.00.00' , 'HR'),
    (002     , 'NIHARIKA' , 'VERMA' , 80000, '14-06-11 09.00.00' , 'ADMIN'),
    (003     , 'VISHAL' , 'SINGHAL' , 300000, '14-02-20 09.00.00' , 'HR'),
    (004     , 'AMITABH' , 'SINGH' , 500000, '14-02-20 09.00.00' , 'ADMIN'),
    (005     , 'VIVEK' , 'BHATI' , 500000, '14-06-11 09.00.00' , 'ADMIN'),
    (006     , 'VIPUL' , 'DIWAN' , 200000, '14-06-11 09.00.00' , 'ACCOUNT'),
    (007     , 'SATISH' , 'KUMAR' , 75000, '14-01-20 09.00.00' , 'ACCOUNT'),
    (008     , 'GETTIKA' , 'CHAUHAN' , 90000, '14-04-11 09.00.00' , 'ADMIN'),
	(008     , 'GETTIKA' , NULL , 90000, '14-04-11 09.00.00' , 'ADMIN');
-- SELECT * FROM WORKER;

CREATE TABLE BONUS(
	WORKER_REF_ID INT ,
    BONUS_AMOUNT INT(10),
    BONUS_DATE DATETIME,
    FOREIGN KEY (WORKER_REF_ID)
		REFERENCES WORKER(WORKER_ID)
		ON DELETE CASCADE
        -- Means on deleting value from one table , it automatically delete value from parallel table
          
);

INSERT INTO BONUS(
	WORKER_REF_ID,BONUS_AMOUNT,BONUS_DATE) VALUES
    (001     , 5000 , '14-02-20 ' ),
	(002     , 3000 , '16-06-11 ' ),
	(003     , 4000, '16-02-20 ' ),
	(001     , 4500 , '16-02-20 ' ),
	(002     , 3500 , '16-06-20 ' );
SELECT * FROM BONUS;

CREATE TABLE TITLE(
	WORKER_REF_ID INT ,
    WORKER_TITLE CHAR(25),
    AFFECTED_FROM DATETIME,
    FOREIGN KEY (WORKER_REF_ID)
		REFERENCES WORKER(WORKER_ID)
		ON DELETE CASCADE
        -- Means on deleting value from one table , it automatically delete value from parallel table
          
);

INSERT INTO TITLE(
	WORKER_REF_ID,WORKER_TITLE,AFFECTED_FROM) VALUES
    (001     , 'MANAGER' , '20-02-16 09.00.00 ' ),
	(002     , 'EXECUTIVE' , '11-06-16 09.00.00' ),
	(008     , 'EXECUTIVE', '16-06-11 09.00.00'),
	(005     , 'MANAGER' , '16-06-11 09.00.00' ),
	(004     , 'ASST.MANAGER' , '16-06-11 09.00.00' ),
    (007     , 'EXECUTIVE' , '16-06-11 09.00.00' ),
    (006     , 'LEAD' , '16-06-11 09.00.00' ),
    (003     , 'LEAD' , '16-06-11 09.00.00' );

 SELECT * FROM TITLE;   


-- 2. DRL (Data Retrieval Language )
SELECT * FROM WORKER ;
SELECT SALARY FROM WORKER;
SELECT FIRST_NAME , SALARY FROM WORKER;

--  3. "WHERE" clause 
SELECT SALARY FROM WORKER;
SELECT * FROM WORKER WHERE SALARY >80000;
SELECT * FROM WORKER WHERE DEPARTMENT='HR';

--  4. "BETWEEN" clause (FIRST_LIMIT AND LAST_LIMIT)[BOTH ARE INCLUSIVE]
SELECT * FROM WORKER WHERE SALARY BETWEEN 80000 AND 100000;

-- 5. reduces OR statements
-- SELECT * FROM WORKER WHERE DEPARTMENT='HR'  OR DEPARTMENT='ADMIN' OR DEPARTMENT='ACCOUNT';

-- better way :
SELECT * FROM WORKER WHERE DEPARTMENT IN ('HR','ADMIN','ACCOUNT');

-- 6. NOT statements
SELECT * FROM WORKER WHERE DEPARTMENT NOT IN ('HR','ADMIN');

-- 7. IS NULL statements
SELECT * FROM WORKER;
INSERT INTO WORKER
	 VALUES
    (009     , 'MONIKA' , 'ARORA' , 5000, '14-02-20 09.00.00' , 'HR');
INSERT INTO WORKER
	 VALUES
    (011     , 'MONIKA' , 'ARORA' , null, '14-02-20 09.00.00' , 'HR');
    
SELECT * FROM WORKER WHERE SALARY IS NULL;

-- --------------------------------------------------------------------
-- 7. WILDCARD / PATTERN FIDNING statements
 -- i) % (astric *) - any number of character including 0 also
 --  ii) _(underscore ) - only one charcter
 
 SELECT * FROM WORKER WHERE FIRST_NAME LIKE '%I%';
  SELECT * FROM WORKER WHERE FIRST_NAME LIKE '_I%';
  
 -- -------------------------------------------------------------------- 
  
-- 10) ORDER BY 
-- It will sort the data on the basis of salary  

SELECT * FROM WORKER order by SALARY;
-- or
SELECT * FROM WORKER order by SALARY ASC;

-- If we want to sort in descending order- add DESC keyword
SELECT * FROM WORKER order by SALARY DESC; 

-- ** DISTINCT KEYWORD
SELECT distinct  DEPARTMENT FROM WORKER;
-- --------------------------------------------------------------------
-- 11) GROUP BY (When we want to do grouping )[Grouping means Aggregation(count)]
-- ** Group by keyword is used with some aggregation functions[COUNT,SUM,AVG,MINIMUM,MAXIMUM].
-- Q- Find number of employess working in different department
-- HR-?
-- ADMIN-?

-- Q2- Find the number of customer in each country in Amazon database.

-- *** aap SELECT and FROM ke beech mei jo bhi column ki list doge wahi column ka name group by keyword ke baad anaa chahiye [Its compulsory]
SELECT DEPARTMENT , count(DEPARTMENT) FROM WORKER group by DEPARTMENT;

SELECT * from WORKER;

-- Q3 Find average salary per department.
SELECT DEPARTMENT , avg(SALARY) FROM WORKER group by DEPARTMENT;

-- Q4 Find minimum salary of each department
-- MIN AGRREGATION
SELECT DEPARTMENT , min(SALARY) FROM WORKER group by DEPARTMENT;

-- MAX AGGREGATION
SELECT DEPARTMENT , max(SALARY) FROM WORKER group by DEPARTMENT;

-- 13. GROUP BY HAVING ( having use karne ke liye hume group by ki zarurat hoti hai )
-- For example mujhe vo deparment list karne hai jiske andar 2 employee se zyaada kaam krte hai 
-- Q5- Tell me departments and their counts having more then 2 workers
SELECT DEPARTMENT , count(DEPARTMENT) FROM WORKER group by DEPARTMENT having count(DEPARTMENT)>2;
SELECT DEPARTMENT , count(DEPARTMENT) FROM WORKER group by DEPARTMENT having count(DEPARTMENT)=5;








--      DDL CONSTRAINTS

 
 --  1- PRIMARY KEY CONSTRAINTS
 -- NOT NULL
--  UNIQUE
--  ONLY ONE PRIMARY KEY PER TABLE 


-- Good Pratice - Keep Primary Key always INT ( use karna fast hota hai )

CREATE TABLE Customer (

	id INT PRIMARY KEY,
    branch_id INT,
    FirstName CHAR (50),
    LastName CHAR (50),
    DOB DATE,
    Gender CHAR(6)
    );




