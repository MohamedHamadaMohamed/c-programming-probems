#include <stdio.h>
int Linear_Search(int size,int* numbers,int elem);
int main()
{
    int numbers[10] = {1,5,3,4,10,9,2,7,6,8};
    int elem =0;
    scanf("%d",&elem);
    int temp = Linear_Search(10,numbers, elem) ;
    if(temp== -1)
    {
        printf("element is not exist\n");
    }
    else
    {
        printf("element numbers[%d] = %d\n",temp,numbers[temp]);
    }
}
int Linear_Search(int size,int* numbers,int elem)
{
    for(int i =0;i<size;i++)
    {
        if(numbers[i] == elem)
        {
            printf(" ----------\n ");
            return i;
        }
    }
    return -1;
}
