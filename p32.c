/*
                    Write a program to remove all the blank space from the string & print it,
                    also count the no of characters
                            Code by Abhishek


*/
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter string\n");
    char s[32];
    char s2[32];
    scanf("%[^\n]%*c",s);   //  "%[^\n]%*c" buffers until new line is found
    int n=0;
    
    for(int a = 0;a<strlen(s);a++)
        if(s[a]!=32)
            s2[n++]=s[a];

    s2[n]='\0';
    printf("%s\n%i charcters",s2,n);
    return 1;
}