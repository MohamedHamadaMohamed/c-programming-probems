#include <stdio.h>
int* createArray(int LowerValue ,int UpperValue,int *result_size);
 

int main()
{


 int *ptr;   
 int result_size;
ptr = createArray(2 ,10,&result_size);
for(int i =0;i<result_size;i++)
{
    printf("%d ",ptr[i]);
}

}
int* createArray(int LowerValue ,int UpperValue,int *result_size)
{
    static int arr[100];
    int size =0;
    if(LowerValue >= UpperValue)
    {
        arr[0]= 0xFF;
        arr[1]= 0xFF;
        *result_size =2;
    }
    else
    {
        for(int i =LowerValue+1;i<UpperValue;i++)
        {
            arr[i-LowerValue-1] = i;
            (*result_size)++;
        }
    }
    return arr;
}