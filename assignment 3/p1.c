#include <stdio.h>
int summation(int numbers_size, int* numbers);
int main()
{
int arr[5] = {1,2,3,4,5};

printf("sum = %d",summation(5, arr));
}
int summation(int numbers_size, int* numbers)
{
    int sum =0;
    for(int i =0;i<numbers_size;i++)
    {
        sum+=numbers[i];
    }
    return sum;
}