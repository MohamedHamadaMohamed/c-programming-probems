
#include <stdio.h>
#include <math.h>
int main()
{
    int l =0;
    int r =0;
    scanf("%d %d",&l,&r);
    int max = 1;
    for(int i =l ;i<=r;i++)
    {
        for(int j =i ;j<=r;j++)
        {
            if((i ^j) > max)
            {
                max = i ^j;
            }

        }
    }
    printf("max =%d \n",max);





}