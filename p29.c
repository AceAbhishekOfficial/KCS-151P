/*
                     
                    Write a program to print the multiplication of two N*N (Square) matrix. 
                    Code by Abhishek
*/
#include <stdio.h>
int main()
{
    int matrix1[4][4]=
    {
        {5,2,6,1},
        {0,6,2,0},
        {3,8,1,4},
        {1,8,5,6}
    };
    int matrix2[4][4]=
    {
        {7,5,8,0},
        {1,8,2,6},
        {9,4,3,8},
        {5,3,7,9}
    };
    int n =sizeof(matrix1)/16;
    int matrix[n][n];
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            int sum = 0;
            for(int c =0;c<n;c++)
            {
                int x = matrix1[a][c]*matrix2[c][b];
                sum+=x;
            }
            matrix[a][b]=sum;
        }
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
            printf("%i ",matrix[a][b]);
        printf("\n");
    }
    return 1;
}