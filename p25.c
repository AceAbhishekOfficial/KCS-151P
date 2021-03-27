#include <stdio.h>
int main()
{
    int arr[10];
    int arr2[10];
    int c=1;
    printf("Enter 10 numbers one by one\n");
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        scanf("%i",&arr[i]);
    }
    arr2[0]=arr[0];
    for(int a = 1; a<sizeof(arr)/4;a++)
    {      
        int flag =0;
        for(int b = 0; b<a;b++)
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