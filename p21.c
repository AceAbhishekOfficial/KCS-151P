/*
            Write a program to find the sum of digits of a 5 digit number using recursion.
                    Code by Abhishek
*/
#include <stdio.h>
int SumOfDigits(int n);

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%i",&num);
    printf("%i",SumOfDigits(num));
    return 1;
}
int SumOfDigits(int n)
{
    if(n==0)    //base case
    return 0;
    return (n%10)+SumOfDigits(n/10);  // 12345 = 5 + 1234 .....
}