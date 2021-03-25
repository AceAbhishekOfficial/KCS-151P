
/*
                Write a program to receive marks of physics, chemistry & maths from user
                & check its eligibility for course if
                a) Marks of physics > 40
                b) Marks of chemistry > 50
                c) Marks of math’s > 60
                d) Total of physics & math’s marks > 150
                or
                e) Total of three subjects marks > 200 
                                Code by Abhishek
*/
#include <stdio.h>
int main()
{
    int p,m,c;
    printf("Enter Marks of Physics\n");
    scanf("%i",&p);
    printf("Enter Marks of Maths\n");
    scanf("%i",&m);
    printf("Enter Marks of Chemistry\n");
    scanf("%i",&c);
    if(p>40 && c>50 && m>60 && (p+m)>150)
    printf("Eligible for course");
    else if((p+m+c)>200)
    printf("Eligible for course");
    else
    printf("Not eligible for course");
    return 1;
}