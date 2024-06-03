#include <stdio.h>
#include <string.h>
typedef struct 
{
    char name[10];
    int id; 
    int grade;
}student_t;

void student_store(student_t * studentsPtr,int size);
void student_display(student_t * studentsPtr,int size);
int main()
{
student_t students[10];

student_store(students,10);
student_display(students,10);

}
void student_store(student_t * studentsPtr,int size)
{
for(int i =0;i<size;i++)
{
   strcpy(studentsPtr->name,"mohamed"); 
   studentsPtr->id = i;
   studentsPtr->grade = size - i - 1;

   studentsPtr++;
}


}
void student_display(student_t * studentsPtr,int size)
{
    for(int i =0;i<size;i++)
    {
    printf("name : %s \tid :%d \t grade: %d \n",studentsPtr->name,studentsPtr->id,studentsPtr->grade); 
        

    studentsPtr++;
    }    
}