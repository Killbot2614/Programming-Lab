CREATE TABLE Departments (
  DepartmentId INT PRIMARY KEY,
  DepartmentName VARCHAR(15) NOT NULL
);
INSERT INTO Departments VALUES(011, "CSE"), (012, "IT"), (013, "ECE"), (014, "EEE");

CREATE TABLE Students (
  StudentId INT PRIMARY KEY,
  StudentName VARCHAR(15) NULL,
  DepartmentId INT NOT NULL,
  DateOfBirth DATE,
  FOREIGN KEY(DepartmentId) REFERENCES Departments(DepartmentId)
);
INSERT INTO Students VALUES(3411237, "Bhargavi", 11, "2002-06-12"), (3412389, "Surendran", 12, "2003-11-23"), (3413066, "Domnic Savio", 13, "2001-01-30");

SELECT DepartmentName, StudentId, StudentName FROM Students JOIN Departments WHERE Students.DepartmentId = Departments.DepartmentId;