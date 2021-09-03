# Python program to enter basic salary and calculate gross salary of an employee algorithm.

# dearness allowance is 40% of basic salary
# house rent allowance is 20% of basic salary

basic_salary=20000
dearness_allowance=(40*basic_salary)/100
house_rent=(20*basic_salary)/100
gross_salary=house_rent+dearness_allowance+basic_salary
print('Dearness Allowance 40 % of Basic Salary : {}'.format(float(dearness_allowance)))
print('House Rent 20 % of Basic Salary : {}'.format(float(house_rent)))
print('Gross Salary : {}'.format(float(gross_salary)))

# Input: Enter Basic Salary : 20000
# Output: 
# Dearness Allowance 40 % of Basic Salary : 8000.0
# House Rent 20 % of Basic Salary : 4000.0
# Gross Salary : 32000.0