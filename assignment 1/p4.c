#include "stdio.h"
#define PI  3.14
int main()
{
float r =0;
float area =0;
float circumference =0;

scanf("%f",&r);
area = 2 * PI *r;
circumference = PI * r *r ; 
printf("%f\n",area);
printf("%f\n",circumference);
return 0; 
}
