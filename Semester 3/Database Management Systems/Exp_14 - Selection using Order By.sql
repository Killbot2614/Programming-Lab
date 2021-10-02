CREATE TABLE student_dept (
  Reg_No INT(7),
  Roll_No VARCHAR(10),
  Student_Name VARCHAR(15),
  User_ID VARCHAR(10)
);
     
INSERT INTO student_dept VALUES('3311159', '15SCS333', 'Abraham', '159Abr'), ('3411147', '14SS564', 'Grace', '147Gra'), ('3511864', '15SCS333', 'RamKumar', '864Ram'), ('3411314', '16SCS145', 'Rahman', '147Rah');
SELECT * FROM student_dept
ORDER BY Reg_No DESC;