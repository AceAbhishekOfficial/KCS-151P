
/*
                Write a program to convert decimal number in to binary number
                    Code by Abhishek
*/
#include <stdio.h>
#include <string.h>
void reverseStr(char str[]);
int main()
{
    char bin[32];
    int num;
    printf("Enter number\n");
    scanf("%i",&num);
    int c=0;
    while(num!=0)
    {
        bin[c++]= (char)((num%2)+48);   //remainder converting in to char by adding 48 (refer to ASCII)
        num/=2;
    }
    bin[c]='\0';    // marking end of string
    reverseStr(bin);  //reversing the string
    printf("%s",bin);
    return 1;
}
void reverseStr(char str[])     // reverse a string function
{
  int n = strlen(str);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}