/*
            Write a program to find the sum of following series 1-X1/1!+X2/2!-
            …………Xn/n!. 
            Here Xn was not defined so i took Xn = X^n
                    Code by Abhishek
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n,x;
    printf("Enter x\n");
    scanf("%i",&x);
    printf("Enter n\n");
    scanf("%i",&n);

     float sum = 1.0 ,temp,fact=1.0;
     for(int a=1;a<=n;a++)
     {
        fact*=a;
        temp = (pow(x,a)/fact)*pow(-1,a);
        sum+=temp;
     }
     printf("Sum is %f",sum);
}