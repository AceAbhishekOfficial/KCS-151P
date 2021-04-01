/*
            Write a program to read number from file and then write all ‘odd’ number
            to file ODD.txt & all even to file EVEN.txt.
                Code by Abhishek
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f1, *fe, *fo;
    f1 = fopen("c.txt", "r");
    fe = fopen("EVEN.txt", "w+");
    fo = fopen("ODD.txt", "w+");


    if (f1 == NULL)
    {
        printf("Could not open file ");
        return 0;
    }

    int n;
    fscanf(f1, "%d,", &n );
    while(!feof(f1))
    {
         
        char s[10];
        sprintf(s,"%i\n",n);//converting number to string

        if(n%2==0)
        fputs(s,fe);//writing character to even file
        else
        fputs(s,fo);//writing character to odd file

        fscanf(f1, "%d,", &n );// reading number
    }

    fclose(f1);
    fclose(fe);
    fclose(fo);
    return 1;
}