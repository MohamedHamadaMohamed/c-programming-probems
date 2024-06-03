#include <stdio.h>
int compare(int size,int* a,int* b );
int main()
{
int arr1[5]={1,2,3,4,5};
int arr2[5]={1,2,6,4,5};

if(!compare(5,arr1,arr2 ))
{
printf("two arrays are identical");
}
else
{
printf("two arrays are not identical");
}

}
int compare(int size,int* a,int* b )
{
int c=0;

for(int i=0;i<size;i++)
{
    if(a[i]!=b[i])
    {
        c=1;
        break;
    }
}

return c;
}