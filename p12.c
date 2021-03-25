
/*
            Write a program to print out all the Armstrong number between 100 and 500.
            refer to p8 for more refrence
                    Code by Abhishek
*/

#include <stdio.h>
#include <math.h>
int main()
{
    for(int n=100;n<=500;n++)
    {
        int l=0,n2=n,n3=n;
        float sum =0;
        while(n2!=0) // this loops counts the number of digits
        {
            l++;
            n2/=10;
        }
        while(n3!=0) // this loop gets digits and stoes in sum
        {
            int rem = n3%10; 
            sum=sum+pow(rem,l); 
            n3/=10;
        }  
        if((int)sum==n)
        printf("%i\n",n);
        
    }
    return 1;
}