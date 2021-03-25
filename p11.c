/*
            Write a program to print the entire prime no between 1 and 300. 
            Prime number : has only 2 factors
            Code by Abhishek

*/

#include <stdio.h>
int main()
{
    for(int a=1;a<=500;a++)
    {
        int p=0;
        for(int x=1;x<=a;x++)
        if(a%x==0)
        p++;
        if(p==2)
        printf("%i\n",a);
    }
    return 1;
}