CREATE TABLE countries (
   Country_ID INT PRIMARY KEY, 
   Country_Name VARCHAR(30) NOT NULL,  
   region_id VARCHAR(9)  
);

INSERT INTO countries VALUES(111, 'India', 'SW134'), (134, 'Australia', 'NE456'), (145, 'Britain', 'SE787');
SELECT * FROM countries;