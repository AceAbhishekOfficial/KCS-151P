/*
                Write a program to convert binary number in to decimal number.
                        Code by Abhishek
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char bin[32];
    printf("Enter binary\n");
    scanf("%s",bin);
    for(int a=0;a<strlen(bin);a++) // checking for validity of binary number
        if(bin[a]!='1' && bin[a]!='0')
        {
            printf("Invalid binary form");
            return 1;
        }
    int dec=0;
    int s =strlen(bin)-1;
    for(int a = s;a>=0;a--)
    {  
        int n  = bin[a]-48;
        dec += n*pow(2,s-a);
    }
    printf("Decimal is %i",dec);
    return 1;
}
