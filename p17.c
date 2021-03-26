/*
                Write a program to calculate the factorial for given number using function.
                            Code by Abhishek
*/
#include <stdio.h>
int fact(int n);

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%i",&num);
    int factorial = fact(num);
    printf("Factorial is %i",factorial);
    return 1;
}

int fact(int n)
{
    int f=1;
    for(int a=1;a<=n;a++)
    f*=a;
    return f;
}
