
/*
                Write a program to convert decimal number in to binary number
                    Code by Abhishek
*/
#include <stdio.h>
#include <string.h>
void reverseStr(char str[]);
int main()
{
    char bin[32],temp[32];
    int num;
    printf("Enter number\n");
    scanf("%i",&num);
    int c=0;
    while(num!=0)
    {
        sprintf(temp,"%i%s",num%2,bin);  // temp = (n%2) + bin
        sprintf(bin,"%s",temp); //bin = temp
        c++;
        num/=2;
    }
    bin[c]='\0';// marking end of string
    printf("%s",bin);
    return 1;
}
