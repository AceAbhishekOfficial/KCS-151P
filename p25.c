/*
                Write a program to delete duplicate element in a list of 10 elements &
                display it on screen. 
                            Code by Abhishek
*/
#include <stdio.h>
int main()
{
    int arr[10]; //orginal array
    int arr2[10]; //new array consists of unique elements
    int c=1;
    printf("Enter 10 numbers one by one\n");
    for (int i = 0; i < sizeof(arr)/4; i++)     // looop to input array
    {
        scanf("%i",&arr[i]);
    }
    arr2[0]=arr[0];
    for(int a = 1; a<sizeof(arr)/4;a++)     //loop to copy array
    {      
        int flag =0;
        for(int b = 0; b<a;b++)         // this loop makes sures element is not repeated
        if(arr[a]==arr[b])
        flag=1;

        if(!flag)
        {
            arr2[c]=arr[a];
            c++;
        }
    }
    printf("Elemts in array are: %i\n",c);   
    for(int a =0;a<c;a++)
    printf("%i,",arr2[a]);
    
    return 1;
}
