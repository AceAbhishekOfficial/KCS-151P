
/*

                Write a c program to copy & count the character content of one file says
                a.txt to another file b.txt. 
                    Code by abhishek
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f1, *f2;
    f1 = fopen("a.txt", "r");
    f2 = fopen("b.txt", "w+");
 
    if (f1 == NULL)
    {
        printf("Could not open file ");
        return 0;
    }
    char c;
    int count=0;
    for (c = getc(f1); c != EOF; c = getc(f1))
    {
       count++;
       fputc(c,f2);
    }
    printf("Total charatcers %i copied",count);
    fclose(f1);
    fclose(f2);
    return 1;
}