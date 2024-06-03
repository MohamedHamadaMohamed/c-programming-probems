

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseArray(int* str,int size);
static void swap(int *num1,int *num2);
int main()
{
int arr[6]= {1,2,3,4,5,6};
reverseArray(arr,6);
for(int i =0;i<6;i++)
{
    printf("%d ",arr[i]);
}
}
void reverseArray(int* str,int size)
{
for(int i=0 ;i<((int)size/2);i++)
{
    swap(&str[i],&str[size-1-i]);
}


}
static void swap(int *num1,int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

    
   
