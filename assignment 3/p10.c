#include <stdio.h>
void convert(char* str);
int main()
{
char str[10];
scanf("%s",&str);
convert(str);
printf("%s",str);

}
void convert(char* str)
{
    char ch = ' ';
    int i =0;
    while('\0' !=str[i])
    {
        if((str[i] >= 'A' )&&(str[i] <= 'Z' ))
        {
           str[i] += ('a'-'A'); 
        }
        i++;
    }
}
