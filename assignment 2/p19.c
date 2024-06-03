#include <stdio.h>
#include <math.h>
int isPowerOf3(int num);
int main()
{
int num =0 ;
scanf("%d",&num);
if (isPowerOf3(num) == 1)
{
    printf("yes");

}
else
{
    printf("no");
}



}
int isPowerOf3(int num)
{
    int i=0;
    while(1)
    {
        if((int)pow(3,i) == num)
        {
            return 1;
        }
        else if ((int)pow(3,i) > num)
        {
            return 0;
        }

        i++;
    }
    return 0;
}