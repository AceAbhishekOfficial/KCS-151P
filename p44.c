/*
            Write a program to find the factorial of given number using command line
            argument. 
                Code by Abhishek
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{

    if(argc<2)
        return printf("No number entred");
    int x;
    sscanf(argv[1],"%d",&x); // int x = stoi(argv[1]); basically converting string into integer
    int f=1;
    for(int a=1;a<x;a++)
        f*=a;
    printf("%i! = %i",x,f);
    return 1;
}