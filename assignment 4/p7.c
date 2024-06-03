#include <stdio.h>
void swap(int* num1,int* num2)
{
    *num1= *num1 ^ *num2;
    *num2= *num1 ^ *num2;
    *num1= *num1 ^ *num2;

}
int main()
{
  int x = 10;
  int y = 20;
  swap(&x,&y);

  printf("%d %d",x,y);
}
