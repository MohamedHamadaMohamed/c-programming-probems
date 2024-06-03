#include <stdio.h>
#include <string.h>
typedef struct period 
{
  int hour;
  int minute;
  int second;
}period_t;

int main()
{
   period_t d1 = {.hour =10,.minute =50,.second = 47};
   period_t d2 = {.hour =8,.minute =37,.second = 13};

   period_t d = {.hour =d1.hour -d2.hour,.minute =d1.minute-d2.minute,.second = d1.second-d2.second};

   printf(" %d:%d:%d",d.hour,d.minute,d.second); 

}