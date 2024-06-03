#include <stdio.h>
#include <math.h>
void convert(char *ch);
int main()
{

char *ch;
scanf("%c",&ch);

convert(&ch);
printf("%c",ch);


}
void convert(char *ch)
{
   *ch += ('A'-'a'); 
}