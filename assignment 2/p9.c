#include <stdio.h>
#include <math.h>
void swap(int *num1,int *num2);
int main()
{
int num1 =0;
int num2 =0;

scanf("%d %d",&num1,&num2);

swap(&num1,&num2);
printf("num1 = %d \n num2 = %d",num1,num2);



}
void swap(int *num1,int *num2)
{
   int temp =0;
    temp =*num1 ;
   *num1 =*num2;
   *num2 = temp;
}