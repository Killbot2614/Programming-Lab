// C program to enter basic salary and calculate gross salary of an employee

// Input basic salary of employee. Store it in some variable say basic_salary.
// If basic_salary <= 10000 then, hra = basic_salary * 0.8 and da = basic_salary * 0.2.
// Similarly check basic salary and compute hra and da accordingly.
// Calculate final gross salary using formula gross_salary = basic_salary + da + hra.

#include<stdio.h>
int main()
{
    int gross_salary,basic_salary,da,hra;
    basic_salary=1000;
    if(basic_salary<=1000)
    {
        hra=basic_salary*0.8;
        da=basic_salary*0.2;
    }
    gross_salary=basic_salary+da+hra+440;
    printf("Gross Salary : %d",gross_salary);
    return(0);
}

// Input: Enter basic Salary: 1000

// Output: Gross Salary : 2440
