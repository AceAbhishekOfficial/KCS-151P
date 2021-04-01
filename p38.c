/*
            Write a program to take 10 integers from file and write square of these
            integer in other file. 
                Code by Abhishek
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f1, *f2;
    f1 = fopen("c.txt", "r");
    f2 = fopen("b.txt", "w+");


    if (f1 == NULL)
    {
        printf("Could not open file ");
        return 0;
    }

  
    for (int i = 0; i < 10; i++)
    {
        int n;
        fscanf(f1, "%d,", &n ); // reading number

        n*=n;//squaring number

        char s[10];
        sprintf(s,"%i\n",n);//converting number to string

        fputs(s,f2);//writing character to file
    }

    fclose(f1);
    fclose(f2);
    return 1;
}