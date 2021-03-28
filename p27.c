/*
                    Write a program to evaluate the addition of diagonal elements of two
                    square matrixes. 
                    Assumptions : Matrix are square and equal size
                    Code by Abhishek
*/
#include <stdio.h>
int main()
{
    int matrix1[4][4]=
    {
        {2,-3,44,5},
        {1,23,8,1},
        {-3,2,78,12},
        {5,0,-23,24}
    };
    int matrix2[4][4]=
    {
        {1,3,44,17},
        {6,3,8,41},
        {-39,20,-25,2},
        {28,0,-43,24}
    };
    int n = sizeof(matrix2[0])/4;
    int Dsum[n];
    for(int a=0;a<n;a++)
    Dsum[a]=matrix1[a][a]+matrix2[a][a];
    for(int a=0;a<n;a++)
    printf("%i\n",Dsum[a]);
    return 1;

}