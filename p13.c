
/*
                    Write a program to draw the following figure:
                    3 2 1
                    2 1
                    1
                    *
                    **
                    ***
                            Code by Abhishek
*/
#include <stdio.h>
int main()
{
    for (int i = 3; i >=1; i--)
    {
        for(int j=i;j>=1;j--)
        printf("%i ",j);
        printf("\n");
    }
    printf("\n\n");
    //////////////////////////////////////////////////////
    for (int i = 3; i >=1; i--)
    {
        for(int j=i;j>1;j--)
        printf(" ");
        for(int j=i;j<=3;j++)
        printf("*");
        printf("\n");
    }
    return 1;
   
}