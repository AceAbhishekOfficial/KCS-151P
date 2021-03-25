
/*
                    Write a program to receive a five-digit no and display as like 24689:
                    2
                    4
                    6
                    8
                    9 
                                Code by Abhishek
*/

#include <stdio.h>
int main()
{
   int n ;
   printf("Enter number\n");
   scanf("%i",&n);
   int sum=0;
   while(n!=0) //reversing number
   {
       int rem=n%10;
       sum=sum*10+rem;
       n/=10;
   }
   while(sum!=0) // printing digits
   {
       int rem = sum%10;
       printf("%i\n",rem);
       sum/=10;
   }
   return 1;
}