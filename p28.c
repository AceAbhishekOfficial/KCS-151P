/*
                    Write a program to find the transpose of a given matrix & check whether it
                    is symmetric or not. 
                    Assumptions : Matrix is square 
                    Code by Abhishek
*/
#include <stdio.h>
int main()
{
    int matrix[4][4]=
    {
        {2,-3,44,5},
        {1,23,8,1},
        {-3,2,78,12},
        {5,0,-23,24}
    };
    // test a symmetric matrix
    /* 
    int matrix[4][4]=
    {
        {2,-3,44,5},
        {-3,23,8,1},
        {44,8,78,12},
        {5,1,12,24}
    };*/
    int n = sizeof(matrix)/16;
    printf("Matrix original\n");
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
            printf("%i ",matrix[a][b]);
        printf("\n");
    }
    int c = 1;
    for(int a=0;a<n;a++)
    for(int b=a;b<n;b++)
    {
        int temp = matrix[a][b];
        matrix[a][b]=matrix[b][a];
        matrix[b][a]=temp;
        if(matrix[a][b]!=matrix[b][a])
            c=0;
    }
    printf("Matrix transpose\n");
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
            printf("%i ",matrix[a][b]);
        printf("\n");
    }
    if(c)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");
    return 1;

}