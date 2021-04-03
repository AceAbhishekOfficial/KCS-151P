/*
            Using Dynamic Memory Allocation, Write a program to find the transpose
            of given matrix. 
                Code by Abhishek

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter size of matrix\n");
    scanf("%i",&n);
    int *arr = (int*)malloc(n * n * sizeof(int));
    if(arr==NULL)
    printf("Failed to allocate memory");
    printf("Enter matrix rowise\n");
    for(int a=0;a<n;a++)
    for(int b=0;b<n;b++)
    scanf("%i",(arr +a*n +b));
    printf("Real Matrix\n");
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        printf("%i\t",*(arr + a*n +b));
        printf("\n");
    }
    
    for(int a = 0;a<n;a++)
    for(int b = a;b<n;b++)
    {
        int temp = *(arr + a*n +b);
        *(arr + a*n + b ) = *(arr + b*n + a);
        *(arr + b*n + a ) = temp;

    }
    printf("\nTransposed Matrix\n");
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        printf("%i\t",*(arr + a*n +b));
        printf("\n");
    }
}