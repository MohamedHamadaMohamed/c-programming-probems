#include "stdio.h"
#define PI  3.14
int main()
{
int num1 =0;
int num2 =0;
int num3 =0;
int min =0;
scanf("%d %d %d",&num1,&num2,&num3);

min = num1;

if(min > num2 )
{
min = num2 ;
}
if(min > num3)
{
min = num3 ;
}
printf("the smallest = %d\n",min);

return 0; 
}
