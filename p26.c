/*
                    Write a program to merge two sorted array & no element is repeated during
                    merging. 
                    Assumptions : Arrays are sorted and individual array does bot have duplicate element
                    Method : Two pointers a and b , compare , add , increase pointers
                    Other method : mix -> sort -> delete duplicate
                            Code by Abhishek
*/
#include <stdio.h>
int main()
{
    //just making two arrays , no input .
    int arr1[]={1,2,5,7,9,21,56,45,90,91,99};
    int arr2[]={1,3,4,21,23,67,69,71,91,95,100,101,102,500}; 
    int n1=sizeof(arr1)/4;
    int n2=sizeof(arr2)/4;
    int n = (n1+n2);
    int arr[n];
    int a=0,b=0,c=0;
    for(int x=0;x<n;x++)
    {
        if( (b==n2 && a<n1) || (a<n1 && arr1[a]<arr2[b] ) )
        {
            arr[c]=arr1[a];
            c++;
            a++;
        }
        else if( (a==n1 && b<n2) || (b<n2 && arr2[b]<arr1[a]) )
        {
            arr[c]=arr2[b];
            c++;
            b++;
        }
        else if( (a<n1 && b<n2 && arr1[a]==arr2[b] ))
        {
            arr[c]=arr2[b];
            c++;
            b++;
            a++;
        }
    }
    printf("%i",arr[0]);
    for(int x=1;x<c;x++)
    printf(",%i",arr[x]);
    return 1;
}