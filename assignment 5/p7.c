#include <stdio.h>
#include <windows.h>
typedef enum {
    LEVEL1,LEVEL2,LEVEL3,
}fan_level;
int main()
{
fan_level  l1=LEVEL1;
fan_level  l2=5;


printf("%d %d\n",l1,l2);
}