#include <stdio.h>

int repeated(int*ptr,int size);
int main()
{
int arr[10]={1,2,2,1,3,7,7,3,4,3};
int temp=repeated(arr,10);
printf("%d ",temp);
}
int repeated(int*ptr,int size)
{
int count =0;
for(int i=0;i<size;i++)
{
    for(int j=0;j<size;j++)
    {
        if(ptr[i] == ptr[j])
        {
            count++;
        }
    }
    if(count%2 == 1)
    {
        return ptr[i];
    }
}
}


