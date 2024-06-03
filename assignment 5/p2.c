#include <stdio.h>
#include <string.h>
typedef struct distance 
{
  int inch;
  int feet;
}distance_t;

int main()
{
   distance_t d1 = {.feet =10,.inch =10};
   distance_t d2 = {.feet =20,.inch =25};

   distance_t d = {.feet = d1.feet +d2.feet,.inch = d1.inch +d2.inch};

   printf(" %d %d",d.feet,d.inch); 

}