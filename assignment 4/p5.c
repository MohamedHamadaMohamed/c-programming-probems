#include <stdio.h>
void copy(int* ptr1,int*ptr2,int size);
int main()
{
  int arr[5] = {3,6,9,1,5};
  int arr2[5];
  copy(arr,arr2,5);
  for(int i =0;i<5;i++)
  {
    printf("%d ",arr2[i]);

  }



}
void copy(int* ptr1,int*ptr2,int size)
{
    for(int i=0;i<size;i++)
    {
        *ptr2++ = *ptr1++;

    }
}