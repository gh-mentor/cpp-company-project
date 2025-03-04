-- Step 1: Create the Database
IF NOT EXISTS (SELECT * FROM sys.databases WHERE name = 'company_db')
BEGIN
  CREATE DATABASE company_db;
END
GO

USE company_db;
GO

-- Step 2: Create Tables

-- Create Companies Table
CREATE TABLE Companies (
  companyId INT PRIMARY KEY IDENTITY,
  name NVARCHAR(100) NOT NULL
);

-- Create Departments Table
CREATE TABLE Departments (
  departmentId INT PRIMARY KEY IDENTITY,
  name NVARCHAR(100) NOT NULL,
  companyId INT,
  FOREIGN KEY (companyId) REFERENCES Companies(companyId)
);

-- Create Employees Table
CREATE TABLE Employees (
  employeeId INT PRIMARY KEY IDENTITY,
  name NVARCHAR(100) NOT NULL,
  salary DECIMAL(18, 2) NOT NULL,
  departmentId INT,
  companyId INT,
  FOREIGN KEY (departmentId) REFERENCES Departments(departmentId),
  FOREIGN KEY (companyId) REFERENCES Companies(companyId)
);

-- Create Developers Table
CREATE TABLE Developers (
  developerId INT PRIMARY KEY IDENTITY,
  employeeId INT,
  programmingLanguages NVARCHAR(MAX),
  FOREIGN KEY (employeeId) REFERENCES Employees(employeeId)
);

-- Create Managers Table
CREATE TABLE Managers (
  managerId INT PRIMARY KEY IDENTITY,
  employeeId INT,
  departmentId INT,
  FOREIGN KEY (employeeId) REFERENCES Employees(employeeId),
  FOREIGN KEY (departmentId) REFERENCES Departments(departmentId)
);

-- Step 3: Create Views

-- Create a view to display employee details including ID, name, salary, and department name
CREATE VIEW EmployeeDetails AS
SELECT 
  e.employeeId,
  e.name AS employeeName,
  e.salary,
  d.name AS departmentName
FROM 
  Employees e
JOIN 
  Departments d ON e.departmentId = d.departmentId;
GO

-- Step 4: Create Stored Procedures

-- Procedure to add a new employee
CREATE PROCEDURE AddEmployee
  @name NVARCHAR(100),
  @salary DECIMAL(18, 2),
  @departmentId INT,
  @companyId INT
AS
BEGIN
  SET NOCOUNT ON;
  BEGIN TRY
    INSERT INTO Employees (name, salary, departmentId, companyId)
    VALUES (@name, @salary, @departmentId, @companyId);
  END TRY
  BEGIN CATCH
    THROW;
  END CATCH
END;
GO

-- Procedure to retrieve employee details by employee ID
CREATE PROCEDURE GetEmployeeDetails
  @employeeId INT
AS
BEGIN
  SET NOCOUNT ON;
  BEGIN TRY
    SELECT 
      e.employeeId,
      e.name AS employeeName,
      e.salary,
      d.name AS departmentName
    FROM 
      Employees e
    JOIN 
      Departments d ON e.departmentId = d.departmentId
    WHERE 
      e.employeeId = @employeeId;
  END TRY
  BEGIN CATCH
    THROW;
  END CATCH
END;
GO

