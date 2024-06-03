#include <stdio.h>
int Fibonacci(int num)
{
    if((num == 1)||(num == 0))
    {
        return num;
    }
    else
    {
        
    return Fibonacci(num-1) +Fibonacci(num-2) ;  
    }
}
int main()
{
int num ;
scanf("%d",&num);
Fibonacci( num);
}

