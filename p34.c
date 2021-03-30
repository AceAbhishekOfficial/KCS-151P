/*

                Write a program to compare two given dates. To store a date uses a
                structure that contains three members namely day, month and year. If the
                dates are equal then display message equal otherwise unequal. 
                        Code by Abhishek
*/

#include <stdio.h>

struct date
{

int day;
int month;
int year;

};
int isequal(struct date d1,struct date d2);

int main()
{
    
    struct date df;
    struct date ds;
    printf("Enter first date [ DD MM YY ]\n");
    scanf("%i %i %i",&df.day,&df.month,&df.year);
    printf("Enter second date [ DD MM YY ]\n");
    scanf("%i %i %i",&ds.day,&ds.month,&ds.year);
    if(isequal(df,ds))
        return printf("The given datse are equal");
    return printf("The given dates are not equal");

}
int isequal(struct date d1,struct date d2)
{
    if(d1.day==d2.day)
        if(d1.month==d2.month)
            if(d1.year==d2.year)
                return 1;
    return 0;
}