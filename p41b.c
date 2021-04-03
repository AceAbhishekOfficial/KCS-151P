/*
    
        Write the following C program using pointer:
        b) To reverse the string through pointer
                Code by Abhishek

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[32];
    printf("Enter the string\n");
    scanf("%s",s);
    char *p1 = s;
    char *p2 = s+strlen(s)-1;
    for(int a=0;a<strlen(s)/2;a++)
    {
        char c = *(p1+a);
        *(p1+a) = *(p2-a);
        *(p2-a) = c;
    }
    printf("%s",s);
}