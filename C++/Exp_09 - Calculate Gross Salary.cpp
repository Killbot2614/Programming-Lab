//  C++ program to enter basic salary and calculate gross salary of an employee

// Gross Salary = Basic + Da + Hra + Ma. 
//                 Deduction = Gross Salary - Pf - Pt - It. 
//                   Net Salary = Gross Salary - Deduction. 

#include<iostream>
using namespace std;
int main()
{
    float
GrossPayment,basic,da,hra,da1,hra1;
    basic=48550;
    da1=6;
    hra1=10;
    
    da=(da1*basic)/100;
    hra=(hra1*basic)/100;
    GrossPayment=basic+da+hra;
    cout<<"Gross Salary :"<<GrossPayment<<endl;;
    return(0);
}

// Input: 
// Enter basic salary :48550
// Enter DA :6
// Enter HRA :10

// Output: Gross Salary :56318
