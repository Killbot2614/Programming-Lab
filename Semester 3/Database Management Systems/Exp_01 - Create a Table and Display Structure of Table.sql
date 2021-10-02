CREATE TABLE client_master (
  client_no VARCHAR(6),
  name VARCHAR(20),
  city VARCHAR(15),
  pincode INT(6),
  state VARCHAR(15),
  bal_due DECIMAL(10,2)
);

PRAGMA table_info('client_master');