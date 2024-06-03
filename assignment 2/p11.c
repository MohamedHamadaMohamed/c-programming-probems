
#include <stdio.h>
#include <math.h>
int powerOfTwo(int num)
{
    for(int i =0;i<num ;i++)
    {
        if(((int)pow(2,i)) == num)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int num =0;
    scanf("%d",&num);

    if(powerOfTwo(num))
    {
    printf("yes");

    }
    else
    {
        printf("no");
    }






}