#include <stdio.h>
#include <math.h>
void multipy(int num1,int num2);
int main()
{
int num1 =0;
int num2 =0;

scanf("%d %d",&num1,&num2);

multipy(num1,num2);



}
void multipy(int num1,int num2)
{
    if(num1 %num2 == 0)
    {
        printf("num1 is multipy num2");
    }
    else
    {
        printf("num1 is not multipy num2");
    }
}