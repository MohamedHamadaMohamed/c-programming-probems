
#include <stdio.h>
#include <math.h>

typedef char bool ;
int evenOddCheck(int num);
int main()
{

int num =0;
scanf("%d",&num);
if(1==evenOddCheck(num))
{
    printf("odd");
}
else
{
    printf("even");
}





}
int evenOddCheck(int num)
{


  return num %2;
}