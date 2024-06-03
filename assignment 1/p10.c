#include "stdio.h"
#include "math.h"
int main()
{

int num1 =0;
int num2 =0;
char op = ' ';
scanf("%d %c %d",&num1 , &op ,&num2 );

switch(op)
{
    case '+' : printf("%d",num1+num2); break;
    case '-' : printf("%d",num1-num2); break;
    case '*' : printf("%d",num1*num2); break;
    case '/' : printf("%d",num1/num2); break;

}

return 0; 
}
