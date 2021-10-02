CREATE TABLE student_db (
  Reg_No INT(15),
  Roll_No VARCHAR(20),
  Student_Name VARCHAR(15),
  User_ID VARCHAR(15)
);

INSERT INTO student_db VALUES(3311159, '15SCS333', 'Abraham', '159Abr'), (3411147, '14SS564', 'Grace', '147Gra'), (3411314, '16SCS145', 'Rahman', '147Rah');
CREATE TABLE dup_student_db AS SELECT * FROM student_db;
SELECT * FROM dup_student_db;