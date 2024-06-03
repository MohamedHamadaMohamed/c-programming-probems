

#include <stdio.h>
int length(char* str);
int main()
{
char str[10] = "mohamed";

scanf("%s",&str);

printf("%d",length(str));

}
int length(char* str)
{


    
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
