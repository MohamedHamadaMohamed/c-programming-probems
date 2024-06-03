#include <stdio.h>
#include <string.h>
typedef struct student 
{
  char name[10];
  int roll;
  int marks;
}student_t;

int main()
{
   student_t s1 ;
   strcpy(s1.name,"mohamed");
   s1.roll =5;
   s1.marks =90;

   printf("s1\n %s %d %d",s1.name,s1.roll,s1.marks); 

}