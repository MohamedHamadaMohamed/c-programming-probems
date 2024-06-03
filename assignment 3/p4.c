#include <stdio.h>
void selection_sorting(int numbers_size, int* numbers);
void swap(int* num1,int* num2);
int main()
{
int numbers[10] = {1,5,3,4,10,9,2,7,6,8};
selection_sorting(10,  numbers);
for(int i = 0;i<10;i++)
{
printf("arr[%d] = %d\n",i,numbers[i]);

}

}
void selection_sorting(int numbers_size, int* numbers)
{
   int min_index =0;
   int i =0;
   int j =0;
    for( i =0;i<numbers_size-1;i++)
    {
        min_index =i;
        for(int j =i+1;j <numbers_size;j++)
        {
            if (numbers[j]<numbers[min_index])
            {        
                min_index =j; 
                swap(&numbers[i],&numbers[min_index]);
        
                
            }   
            

        }
        
        
    }
    
   /* int i, j, min_idx;  
  
   
    for (i = 0; i < numbers_size-1; i++)  
    {  
        
       
        min_idx = i;  
        for (j = i+1; j < numbers_size; j++)  
        if (numbers[j] < numbers[min_idx])  
            min_idx = j; 
        swap(&numbers[min_idx], &numbers[i]);  
    }  
   */
}
void swap(int* num1,int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}