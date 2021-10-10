CREATE TABLE Employee ( 
  id VARCHAR(6), 
  name VARCHAR(20),
  age INT(6), 
  address VARCHAR(15), 
  salary DECIMAL(10,2) 
);

INSERT INTO Employee VALUES('5', 'Rajesh' , 21, 'Agra', 10000), ('4', 'Akshit', 25, 'Delhi', 20000), ('8', 'Vikas', 28, 'Mumbai', 25000), ('6', 'Rakesh', 26, 'Delhi', 30000); 
SELECT * FROM Employee WHERE age IN (22 OR 28);