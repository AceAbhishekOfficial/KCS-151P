/*
                Write a program to construct a Fibonacci series upto n terms. 
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