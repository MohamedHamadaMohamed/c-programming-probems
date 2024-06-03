#include "stdio.h"
#include "math.h"

void isPrime(int num)
{
for(int i =2;i<num;i++)
{
    if(num %i == 0)
    {
        printf("not prime \n");
        return ;
    }
    
    
}   
 printf("prime \n");

}
int main()
{

int num =0;
scanf("%d",&num);

isPrime(num);

return 0; 
}
