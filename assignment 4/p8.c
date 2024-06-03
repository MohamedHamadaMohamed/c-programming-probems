#include <stdio.h>
void swapAraay(int* arr1,int* arr2,int size);

int main()
{
int arr1[5] = {1,2,3,4,5};
int arr2[5] = {6,7,8,9,10};

swapAraay(arr1,arr2,5);
printf("array 1 \n");
for(int i =0;i<5;i++)
{
    printf("%d ",arr1[i]);
}
printf("\narray 1 \n");
for(int i =0;i<5;i++)
{
    printf("%d ",arr2[i]);
}


}
void swapAraay(int* arr1,int* arr2,int size)
{
    int temp =0;
    for(int i =0;i<size;i++)
    {
        temp = *arr1;
        *arr1 = *arr2;
        *arr2 =temp;

        arr1++;
        arr2++;
    }
}