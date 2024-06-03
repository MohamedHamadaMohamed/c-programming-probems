
#include <stdio.h>
#include <math.h>
int addFloat(float num1 ,float num2);
int main()
{
    float num1 =0;
    float num2 =0;
    scanf("%f %f",&num1,&num2);

    printf("%d",addFloat( num1 , num2));
}
int addFloat(float num1 ,float num2)
{
    float result =0;
    result = num1+num2;
    return (int)result;
}