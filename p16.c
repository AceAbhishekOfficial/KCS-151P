/*
            Write a program to print area of rectangle using function & return its value
            to main function. 
                    Code by Abhishek
*/
#include <stdio.h>
float CalcArea(float l, float b);
int main()
{
    float a,b;
    printf("Enter length and breadth\n");
    scanf("%f %f",&a,&b);
    CalcArea(a,b);
}
float CalcArea(float l, float b)
{
    float area = l*b;
    printf("%f",area);
    return area;
}