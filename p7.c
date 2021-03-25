/*
                Write a program to construct a Fibonacci series upto n terms.
                Definition of Fibonacci Series : In mathematics, the Fibonacci numbers, commonly denoted Fn, form a sequence, 
                called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1.
                0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181......
                        Code by Abhishek
*/

#include <stdio.h>
int main()
{
    int n,a=0,b=1,c=0;
    printf("Enter n\n");
    scanf("%i",&n);
    if(n>=1)
    printf("0 ");
    if(n>=2)
    printf("1 ");
    for(int x=0;x<n-2;x++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%i ",c);
    }
    return 1;
}
