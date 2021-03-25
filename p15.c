/*
                Write a function that return sum of all the odd digits of a given positive no
                entered through keyboard.
                        Code by Abhishek 
*/
#include <stdio.h>
int  SumOfOddDigits(int n); // function declaration ( thats why i hate C )
int main()
{
    int x;
    printf("Enter number\n");
    scanf("%i",&x);
    int sum = SumOfOddDigits(x);
    printf("Sum of odd digits is %i",sum); // function calling
    return 1;
}

int  SumOfOddDigits(int n)  // function 
{
    int sum =0;
    while(n!=0)
    {
        int rem =n%10;
        if(rem%2==1)
        sum+=rem;
        n/=10;
    }
    return sum;
}