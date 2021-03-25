/*
            Write a program to generate sum of series 1!+2!+3!+ ...... +n!
            n! = 1 * 2 * 3 *.......*n
                    Code by Abhishek   
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n\n");
    scanf("%i",&n);
    int sum=0;
    int f=1;
    for(int x =1;x<=n;x++)
    {
        f*=x;
        sum+=f;
        //  sum+=f*=x; one line expression for above 2 expression
    }
    printf("Σn! = %i", sum);
    return 1;
}
