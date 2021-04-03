/*

            Write a program to find the largest no among 20 integers array using
            dynamic memory allocation 
                    Code by Abhishek
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = (int*)malloc(20*sizeof(int)); // resvers a 20 X 4 memory in heap known as dynamic
    printf("Enter 20 numbers\n");
    for(int a=0;a<20;a++)
    scanf("%i",(p+a));
    int max =0;
    for(int a=0;a<20;a++)
    if(max<*(p+a))      //*(p+a)=p[a]
    max=*(p+a);
    return printf("The maximum of 20 number is : %i",max);

}