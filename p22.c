/*
            Write a program to calculate the GCD of given numbers using recursion.
            Finally a good question
            Made using Masked Recursive function , can also be made using global var or other technique
                    Code by Abhishek
*/
#include <stdio.h>
int GCD(int a, int b);
int GCDof(int a, int b, int c);
int main()
{
    int n1,n2;
    printf("Enter first number\n");
    scanf("%i",&n1);
    printf("Enter second number\n");
    scanf("%i",&n2);
    printf("GCD of %i and %i is %i",n1,n2,GCD(n1,n2));
    return 1;
}      
int GCD(int a, int b)   // masked recursive fucntion 
{
    int min = a<b?a:b;  // ternary operator to find min of a & b
    return GCDof(a,b,min);  // called another function
}
int GCDof(int a, int b , int c)    // main recursive function
{
    if( c == 1)    //base case
    return 1;
    if(a%c==0 && b%c==0)   //terminating case 
    return c;
    return GCDof(a,b,(c-1));   // just decreasing the divisor
}              