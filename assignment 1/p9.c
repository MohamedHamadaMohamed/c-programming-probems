#include "stdio.h"
#include "math.h"
int main()
{

int grade =0;
scanf("%d",&grade);
if(grade >85)
{
    printf("excellent\n");
}
else if(grade >75)
{
    printf("very good\n");
}
else if(grade >65)
{
    printf("good\n");
}
else if(grade >50)
{
    printf("pass\n");
}
else 
{
    printf("fail\n");
}
return 0; 
}
