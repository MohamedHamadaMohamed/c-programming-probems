#include <stdio.h>
#include <string.h>
typedef struct complex 
{
  int real;
  int com;
}complex_t;

int main()
{
   complex_t d1 = {.real =10,.com =10};
   complex_t d2 = {.real =20,.com =25};

   complex_t d = {.real = d1.real +d2.real,.com = d1.com +d2.com};

   printf(" %d+%di",d.real,d.com); 

}