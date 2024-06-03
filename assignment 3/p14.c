

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size    10
void reverseString(char* str);
int main()
{
char str[size] = "mohamed";

scanf("%s",&str);
reverseString(str);
printf("%s",str);

}
void reverseString(char* str)
{
char temp[size] ;
int i=0;

for (i =0;i<strlen(str);i++)
{
    temp[i] = str[strlen(str)-i-1];
}
temp[i] = '\0';
strcpy(str,temp);



}

    
   
