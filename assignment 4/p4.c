#include <stdio.h>
int smallest(int* ptr,int size);
int main()
{
  int arr[5] = {3,6,9,1,5};
  
  printf("%d",smallest(arr,5));



}
int smallest(int* ptr,int size)
{
    int min = *ptr;
    for(int i =0;i<size;i++)
    {
       if(*(ptr+i) <min)
       {
        min = *(ptr+i);
       } 
    }
    return min;
}