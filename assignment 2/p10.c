

#include <stdio.h>
#include <math.h>
int countHoles(int num);
int main()
{
    int num =0;
    scanf("%d",&num);
    printf("%d",countHoles(num));

}
int countHoles(int num)
{
    int count =0;
    while(num != 0)
    {
        /*
        1, 2, 3, 5 and 7 = 0 holes.
        0, 4, 6, and 9 = 1 hole.
        8 = 2 holes.
        
        */
        if(((num %10) == 8) )
        {
            count+=2;
        }
        else if (((num %10) == 0)||((num %10) == 4)||((num %10) == 6)||((num %10) == 9))
        {
            count++;
        }


        num /=10;
    }


return count;

}
