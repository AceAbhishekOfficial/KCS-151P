/*
                WAP to calculate area of traingle using heron's formula
                            Code by Abhishek

*/

#include <stdio.h>
int main()
{
    float s1 = 4, s2 = 5, s3 =6;
    float s=(s1+s2+s3)/2;
    float area = (s*(s-s1)*(s-s2)*(s-s3));
    if(area<=0)
    printf("Traingle not possible");
    printf("Area is %f",area);
    return 1;
}