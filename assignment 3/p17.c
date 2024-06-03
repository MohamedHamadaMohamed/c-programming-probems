

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * Swap (int a_size,int *a,int b_size,int *b);
int main()
{
int arr1[5]= {1,2,3,4,5};
int arr2[5]= {6,7,8,9,10};
for(int i= 0;i<5;i++)
{
    printf("%d ",arr1[i]);
}
printf("\n");
Swap (5,arr1,5,arr2);
for(int i= 0;i<5;i++)
{
    printf("%d ",arr1[i]);
}
}
int * Swap (int a_size,int *a,int b_size,int *b)
{
    for(int i =0;i<a_size;i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
    
   
