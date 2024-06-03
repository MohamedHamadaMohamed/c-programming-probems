

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size    10
void removeChar(char* str);
int main()
{
char str[size] = "mohamed";

scanf("%s",&str);
removeChar(str);
printf("%s",str);

}
void removeChar(char* str)
{
char temp[size] ;
int i=0;
int j=0;
for (i =0;str[i]!='\0';i++)
{
    if (((str[i] >='a')&&(str[i]<='z'))||((str[i] >='A')&&(str[i]<='Z')))
    {
        temp[j++]=str[i];
    }
}
temp[j] = '\0';
strcpy(str,temp);



}

    
   
