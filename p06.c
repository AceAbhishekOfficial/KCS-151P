/*
                Write a program to find the value of y for a particular value of n. The a, x,
                b, n is input by user
                if n=1 y=ax%b
                if n=2 y=ax2+b2
                if n=3 y=a-bx
                if n=4 y=a+x/b 
                        Code by Abhishek
*/
#include <stdio.h>
int main()
{
    int a,b,x,n,y;
    printf("Enter a\n");
    scanf("%i",&a);
    printf("Enter x\n");
    scanf("%i",&x);
    printf("Enter b\n");
    scanf("%i",&b);
    printf("Enter n\n");
    scanf("%i",&n);
    switch(n)
    {
        case 1:
        {
            y=a*x%b;
            printf("y = %i",y);
            break;
        }
        case 2:
        {
            y=a*x*2+b*2;
            printf("y = %i",y);
            break;
        }
        case 3:
        {
            y=a-b*x;
            printf("y = %i",y);
            break;
        }
        case 4:
        {
            y=a+x/b;
            printf("y = %i",y);
            break;
        }
        default:
        printf("Invalid n");
    }
    return 1;
}
