#include <stdio.h>
int main()
{
int x = 0xAABBCCDD;
short* ptr = (short*)&x;
short temp = *ptr;
printf("%x\n",temp);
*ptr = *(ptr+1);
ptr++;
*(ptr) = temp;
printf("0x%x",x);

}


