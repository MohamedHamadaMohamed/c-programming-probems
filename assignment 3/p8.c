#include <stdio.h>
#define size   100
int main()
{
int arr[size];
arr[0]=1;
for(int i =1;i<size;i++)
{
arr[i] = arr[i-1]*3;
}
int index ;
scanf("%d",&index);
printf("element =%d",arr[index]);
}

