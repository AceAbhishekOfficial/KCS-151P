/*
                Write a program to find sum of Fibonacci series using function. 
                        Code by Abhishek
*/
#include <stdio.h>
int fibSum(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%i",&n);
    int sum = fibSum(n);
    printf("Sum of n fibonacci series is %i",sum);
    return 1;
}
int fibSum(int n)
{
    int sum=1,a=0,b=1,c=0;  
    for(int x=0;x<n-2;x++)
    {
        c=a+b;
        a=b;
        b=c;
        sum+=c;
    }
    return sum;
}