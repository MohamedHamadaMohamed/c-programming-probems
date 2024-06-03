

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size1    20
#define size2    10
void concatenate(char* str1,char* str2);
int main()
{
char str1[size1] ="mohamed";
char str2[size2] ="hamada";

//scanf("%s",&str1);
//printf("\n");
//scanf("%s",&str2);

concatenate( str1, str2);
printf("%s",str1);

}
void concatenate(char* str1,char* str2)
{

int lengthStr1 =0;
while(str1[lengthStr1] !='\0')
{
    lengthStr1++;
}
for(int i =lengthStr1;i<size1;i++)
{
    str1[i]=str2[i-lengthStr1];
}

}

    
   
