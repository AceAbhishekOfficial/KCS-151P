/*
                WAP to find largest of three numbers using nested if else
                        Code By Abhishek
*/
#include <stdio.h>
int main()
{
    int a , b, c;
    printf("Enter three numbers\n");
    scanf("%i %i %i",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("Largest number is %i",a);
        else
        printf("Largest number is %i",c);
    }
    else if(a>c)
    {
        if(a>b)
        printf("Largest number is %i",a);
        else
        printf("Largest number is %i",b);
    }
    else
    {
        if(b>c)
        printf("Largest number is %i",b);
        else
        printf("Largest number is %i",c);
    }
    return 1;
}
