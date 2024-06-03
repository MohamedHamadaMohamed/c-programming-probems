#include <stdio.h>
void bubble_sorting(int numbers_size, int* numbers);
int main()
{
int numbers[10] = {1,5,3,4,10,9,2,7,6,8};
bubble_sorting(10,  numbers);
for(int i = 0;i<10;i++)
{
printf("arr[%d] = %d\n",i,numbers[i]);

}

}
void bubble_sorting(int numbers_size, int* numbers)
{
    
    for(int i =0;i<numbers_size-1;i++)
    {
        for(int j =0;j <numbers_size-1;j++)
        {
            if (numbers[j]>numbers[j+1])
            {
                int temp = numbers[j+1];
                numbers[j+1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
   
}