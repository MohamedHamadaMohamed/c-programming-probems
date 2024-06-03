
#include <stdio.h>
#include <math.h>
int main()
{
    int num =0;
    scanf("%d",&num);
    int count =0;
    while(num != 0)
    {
        if((num %2) == 1)
        {
            count++;
        }

        num /=2;
    }

    printf("%d",count);





}