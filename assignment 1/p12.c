#include "stdio.h"
#include "math.h"
int main()
{

int num =0;
scanf("%d",&num);
int fact =1;
for(int i =1 ;i<=num;i++)
{
    fact *= i;
}
printf("%d",fact);
return 0; 
}
