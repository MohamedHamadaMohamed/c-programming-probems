
#include <stdio.h>
#include <math.h>

typedef char bool ;
bool isalphabet(char ch);
int main()
{
    char ch =0;
    scanf("%c",&ch);
    if(isalphabet(ch) ==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }





}
bool isalphabet(char ch)
{
    bool res = 0;
    if(((ch >='a')&&(ch<='z'))||((ch >='A')&&(ch<='Z')))
    {
       res =1;
    }
    else
    {
        res =0;
    }
    return res;
}