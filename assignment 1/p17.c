#include "stdio.h"
#include "math.h"


int main()
{
int x =0;
int count = 0;
scanf("%d",&x);
while(x != 0)
{
    count++;
    
    x/=10;
    
}
printf("%d\n",count);
return 0; 
}
