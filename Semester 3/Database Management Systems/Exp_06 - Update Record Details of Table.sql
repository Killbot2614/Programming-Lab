CREATE TABLE student_db (
  regno INT(11),
  student_name CHAR(30),
  student_dept VARCHAR(25),
  date_of_join DATE
);

INSERT INTO student_db VALUES(1234, 'Kumar21', 'CSE_18scs123', '2019-03-22'), (567, 'Rohit_sathyabama_Institute', 'Mech3', '2019-05-12');

UPDATE student_db SET student_name = 'Rohit_sathya' WHERE regno = 567;
SELECT * FROM student_db;