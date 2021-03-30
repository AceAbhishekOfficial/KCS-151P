
/*
                Write a program to store the following string “zero”, “one” -------“five”.
                Print the no in words, given in figure as 3205. 
                        Code by Abhishek
*/
#include <stdio.h>
int main()
{
    char spell[10][6]=
    {
        "zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
    };
    printf("Enter the number\n");
    int n;
    scanf("%i",&n);
    int r =0;
    while(n!=0)
    {
        r=r*10+(n%10);
        n/=10;
    }

    while(r!=0)
    {
        printf("%s ",spell[r%10]);
        r/=10;
    }
    return 1;
}
