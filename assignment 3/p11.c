

#include <stdio.h>
int frequency(char* str,char ch);
int main()
{
char str[10] = "mohamed";
char ch = 'm';
scanf("%s %c",&str,&ch);

printf("%d",frequency(str, ch));

}
int frequency(char* str,char ch)
{
    int f =0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i] == ch)
        {
            f++;
        }
        i++;
    }
    return f;
}
