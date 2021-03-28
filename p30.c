/*
                Write a program in C to check whether the given string is a palindrome or not.
                Case sensetive
                            Code by Abhishek
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[32];
    printf("Enter string\n");
    scanf("%s",s);
    int f = 1;
    int n = strlen(s);  
    for(int a=0;a<n;a++)
    if(s[a]!=s[n-a-1])
    {
        f=0;
        break;
    }
    if(f)
    return printf("String is Palindrome");
    return printf("String  is not Palindrome");
}