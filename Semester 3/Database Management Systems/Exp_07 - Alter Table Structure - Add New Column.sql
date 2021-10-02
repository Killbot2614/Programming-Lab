CREATE TABLE client_master (
  client_no VARCHAR(6),
  name VARCHAR(20),
  city VARCHAR(15),
  pincode INT(6),
  state VARCHAR(15),
  bal_due DECIMAL(10, 2)
);
    
INSERT INTO client_master VALUES('0001', 'Ivan', 'Bombay', 400054, 'Maharashtra', 15000), ('0002', 'Vandana', 'Madras', 780001, 'Tamilnau', 756742.54), ('0003', 'Pramada', 'Bombay', 400057, 'Maharashtra', 5000.45);
ALTER TABLE client_master ADD COLUMN DOJ;
INSERT INTO client_master VALUES('0011', 'RajuMohan', 'Vijawada', 520001, 'AndraPradesh', 44326.12, '2019-06-12');
SELECT * FROM client_master;
