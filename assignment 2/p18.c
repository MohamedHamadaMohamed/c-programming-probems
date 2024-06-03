
#include <stdio.h>
#include <math.h>
int powerOfTwo(int num);
int main()
{
    int num =0;
    scanf("%d",&num);
    if(1 == powerOfTwo( num))
    {
        printf("true");
    }
    else
    {
        printf("false\n");
    }




}
int powerOfTwo(int num)
{
    int temp = (int)sqrt(num);
    if((temp * temp) ==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}