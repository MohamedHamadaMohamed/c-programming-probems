#include "stdio.h"
#include "math.h"


int main()
{
int x =0;
int reverse = 0;
scanf("%d ",&x);
while(x != 0)
{
    int temp =0;
    temp = x %10;
    reverse*=10;
    reverse += temp;
    x/=10;
    
}
printf("%d\n",reverse);
return 0; 
}
