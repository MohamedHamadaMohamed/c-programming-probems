

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int occurrence(int* arr,int size);
int main()
{
int Array[15]={1,2,2,3,3,3,3,4,4,4,4,4,3,3,3};
int t= occurrence(Array,15);
printf("%d",t);
}
int occurrence(int* arr,int size)
{
    int count =0;
    int prev=0;
    for(int i =0;i<size;i++)
    {

        count =1;
        for(int j =i+1;arr[j] == arr[i] ;j++)
        {
            count++;
        }
        if(count > prev)
        {
            prev =count;
        }

    }
    return prev;
}

    
   
