#include <stdio.h>
#include <math.h>
void print(int num1,int num2);
int main()
{
int num1 =0;
int num2 =0;

scanf("%d %d",&num1,&num2);

print(num1,num2);



}
void print(int num1,int num2)
{
    for(int i = num1;i<=num2;i++)
    {
        int j =0;
        for( j =2; j<i;j++)
        {
            if((i%j)==0)
            {
                break;
            }
        }
        if(i == j)
        {
            printf("%d \n",i);
        }




    }
}