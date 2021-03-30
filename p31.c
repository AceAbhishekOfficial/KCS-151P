/*
                Write program to sort the array of character (String) in alphabetical order
                like STRING in GINRST.
                Assumption : String entered is in captial case with no special symbol
                Method : Simple A-Z bruteforce sorting
                    Code by Abhishek

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[32];
    printf("Enter the String\n");
    scanf("%s",s);

    int n = strlen(s);
    char s2[n+1];
    int k=0;
    for(char c ='A';c<='Z';c++)
    {
        for(int a=0;a<n;a++)  
        if(s[a]==c)
        {
            s2[k++]=s[a];
        }
    }
    s2[k]='\0';
    printf("The Soreted String is \n %s",s2);
    return 1;
}
