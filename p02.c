/*
            Basic salary of an employee is input through the keyboard. The DA is 25%
            of the basic salary while the HRA is 15% of the basic salary. Provident
            Fund is deducted at the rate of 10% of the gross salary (BS+DA+HRA).
            Program to calculate the Net Salary. 
                    Code by Abhishek
*/

#include <stdio.h>
int main()
{
    float salary;
    printf("Enter salary\n");
    scanf("%f",&salary);
    float grossSalary, netSalary;
    grossSalary = salary + (salary*25/100) + (salary*15/100);
    netSalary = grossSalary - (grossSalary*10/100);
    printf("Net Salary is %.2f", netSalary); //.2f means print upto 2 DP
    return 1;
}