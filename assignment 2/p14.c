
#include <stdio.h>
#include <math.h>
void Fibonacci(int num);
int main()
{
    int num =0;
    scanf("%d",&num);
    Fibonacci( num);

}
void Fibonacci(int num)
{
    int prev =0;
    int current =1;
    int temp =0; ;
    printf("%d %d ",prev,current);
    for(;temp<num;)
    {
        temp = current +prev;
        printf("%d ",temp);
        prev =current;
        current =temp ;


    }
}