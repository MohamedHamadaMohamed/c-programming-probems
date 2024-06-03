#include "stdio.h"
#define PI  3.14
int main()
{
int num1 =0;
int num2 =0;
scanf("%d %d",&num1,&num2);

if(num1 > num2 )
{
    printf("number1 is higher than nunmber2\n");

}
else if(num1 < num2)
{
    printf("number2 is higher than nunmber1\n");

}
else if(num1 == num2)
{
    printf("number1 is rqual to nunmber2\n");

}
else 
{
    printf("error\n");

}

return 0; 
}
