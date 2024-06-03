#include <stdio.h>
int main()
{
  char str[10] = "mohamed";
  char* ptr =str;
  int len =0;
  while(*ptr !='\0')
  {
    len++;
    ptr++;
  }   
  printf("%d ",len);



}