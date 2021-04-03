/*
            Write the following C program using pointer:
            a) To sort the list of numbers through pointer 
            Pointer basic : *(p+b) = arr[0+b] 
                    Code by Abhishek
*/
#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter 10 numbers\n");
    for(int a=0;a<10;a++)
    scanf("%i",&arr[a]);
    int *p = &arr[0]; // pointer

    // applying basic bubble sort technique with pointer
    for(int a = 0; a<10;a++)
    for(int b = 0 ; b<10-1;b++)
    if(*(p+b)>*(p+b+1))  
    {
        int temp = *(p+b);
        *(p+b)=*(p+b+1);
        *(p+b+1)=temp;
    }
    printf("%i",arr[0]);
    for(int a=1;a<10-1;a++)
    printf(",%i",arr[a]);
    return 1;
}