/*
                Write a program to find whether the number is Armstrong number. 
                Armstrong number : The sum of digits raised to power of their lenght equals to 
                numer.
                abcd... = a^n + b^n + c^n + d^n +....
                ex: 153 = 1^3 + 5^3 + 3^3 
                hence 153 is armstrong number
                        Code by Abhishek 
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n ;
    printf("Enter n\n");
    scanf("%i",&n);
    int l=0;
    int n2=n;
    while(n2!=0) // this loops counts the number of digits
    {
        l++;
        n2/=10;
    }
    float sum =0;
    int n3=n;
    while(n3!=0) // this loop gets digits and stoes in sum
    {
        int rem = n3%10; // gets last dgit of n
        sum=sum+pow(rem,l); // sum = sum + lastdgit^l
        n3/=10;//removes last digit
    }  
    if((int)sum==n)
    printf("Armstrong Number");
    else
    printf("Not armstrong number");
    return 1;
}
