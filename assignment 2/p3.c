
#include <stdio.h>
#include <math.h>

typedef char bool ;
bool ispositive(int num);
int main()
{
    int num =0;
    scanf("%d",&num);
    if(ispositive(num) ==1)
    {
        printf("positive\n");
    }
    else
    {
        printf("negative\n");
    }





}
bool ispositive(int num)
{
    bool res = 0;
    if(num >0)
    {
       res =1;
    }
    else
    {
        res =0;
    }
    return res;
}