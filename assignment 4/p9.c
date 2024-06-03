#include <stdio.h>

int main()
{

char arr[10]= "mohamed";
char created[5];
char next ;
char current;
char* ptr =arr;
while((*(ptr+2))!='\0')
{
ptr++;
}
created[0] = *(ptr+1);
created[1] = ' ';
created[2] = *ptr;
created[3] = '\0';

printf("%s",created);

}
