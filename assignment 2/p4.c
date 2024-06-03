
#include <stdio.h>
#include <math.h>

typedef char bool ;
int operation(int num1,int num2,char op);
int main()
{
    int num1=0,num2 =0;
    char op = ' ';
    scanf("%d %c %d",&num1,&op,&num2);
    printf("%d",operation(num1,num2,op));





}
int operation(int num1,int num2,char op)
{
   int result =0;
switch (op)
{
case '+': result= num1 +num2;    break;
case '-': result= num1 -num2;    break;
case '*': result= num1 *num2;    break;
case '/': result= num1 /num2 ;   break;
default: /*error*/ break;
}


   return result;
}