#include <stdio.h>
#include <string.h>
typedef union {
    char first_name[30];
    char last_name[30];
}family_name;
int main()
{
family_name n;
strcpy(n.first_name,"mohamed");

printf("%s\n",n.last_name);
}