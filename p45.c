/*
            Write a program to find the sum of digits of a 5 digit number using
            command line argument. 
                Code by Abhishek
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{

    if(argc<2)
        return printf("No number entred");
    int x;
    sscanf(argv[1],"%d",&x); 
    int sum=0;
    while(x!=0)
    {
        sum+=(x%10);
        x/=10;
    }
    printf("Sum of digits is %i",sum);
    return 1;
}