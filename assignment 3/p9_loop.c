#include <stdio.h>
void Fibonacci(int num)
{
    int f =0 ;
    int s =1 ;
    int temp =0;
    

    
    for(int i =0;i<num;i++)
    {
        temp = f + s;
        
        f = s;
        s= temp;

    }
    printf("%d ",temp);
}
int main()
{
int num ;
scanf("%d",&num);
Fibonacci( num);
}

