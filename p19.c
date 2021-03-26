/*
            Write factorial function & use the function to find the sum of series
            S=1!+2!+-----n!. 
                    Code by Abhishek
*/
#include <stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%i",&num);
    int sum = 0;
    for(int x=1; x<=num; x++)
    sum+=fact(x);
    printf("Σn! = %i",sum);
    return 1;
}
int fact(int n)
{
    int f=1;
    for(int a=1;a<=n;a++)
    f*=a;
    return f;
}