/*
           Write a program to print all the prime number, between 1 to 100 in file
           prime.txt. 
                Code by Abhishek
*/
#include <stdio.h>
#include <string.h>

int isPrime(int n);

int main()
{
    FILE *f;   
    f = fopen("prime.txt", "w+"); 
    printf("printing\n");
    for(int a=2;a<100;a++)
    {
        if(isPrime(a))
        {
            char s[10];
            sprintf(s,"%i\n",a);
            fputs(s,f);
        }
  
    }

    fclose(f);
    return 1;
}
int isPrime(int n)
{
    int c=0;
    for(int a=1;a<=n;a++)
    if(n%a==0)
    c++;
    if (c==2) return 1;
    return 0;
}