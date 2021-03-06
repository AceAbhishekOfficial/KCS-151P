/*
                Write a program to calculate roots of a quadratic equation.
                            Code by Abhishek
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c\n");
    scanf("%i %i %i",&a,&b,&c);
    float d =(b*b)-4*(a*c);
    if(d<0) //imaginary roots
    {
        d=sqrt(-d)/(2*a);
        float x =(-b)/(2*a);
        printf("Roots are %.3f + %.3fi , %.3f - %.3fi",x,d,x,d);
    }
    else
    {
        d=sqrt(d);
        float x1,x2;
        x1=(-b+d)/(2*a);
        x2=(-b-d)/(2*a);
        printf("Roots are %.3f,%.3f",x1,x2);
    }
    return 1;
}
