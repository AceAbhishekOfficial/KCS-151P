/*
                Write a program to find the factorial of given number using recursion. 
                Recursion : when a function calls itself and this process goes until base case is 
                reached. ( Its alternative of loop )
                Factorial : as we know 
                n!      = n * (n-1)!
                (n-1)!  = (n-1) * (n-2)!
                .
                .
                .
                (n-n)! = 0!
                0! = 1
                hence same trick is used to calulate n! using recursion
                        Code by Abhishek
*/

#include <stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%i",&num);
    int sum = fact(num);
    printf("%i",sum);
    return 1;
}
int fact(int n)
{
    if(n==0) //base case ( terminates recursion)
    return 1;
    else
    return n*fact(n-1); // n! = n X (n-1)! thats called recursion
}