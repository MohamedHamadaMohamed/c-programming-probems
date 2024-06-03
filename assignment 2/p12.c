
#include <stdio.h>
#include <math.h>
int heaterActivation(int temp);
int main()
{
    int temp =0;
    scanf("%d",&temp);
    printf("required heating time = %d mins.",heaterActivation(temp));





}
int heaterActivation(int temp)
{
    if((temp >=0)&&(temp <= 30))
    {
        return 7;
    }
    else if ((temp >30)&&(temp <= 60))
    {
        return 5;

    }
    else if ((temp >60)&&(temp <= 90))
    {
        return 3;

    }
    else if ((temp >90)&&(temp <= 100))
    {
        return 1;

    }  
    else
    {
        return 0;
    }
    return 0;
}