#include <stdio.h>
void swapPointer(int** ptr1,int** ptr2);
int main()
{
int x =5;
int y =10;
int* x_ptr =&x;
int* y_ptr = &y;

swapPointer(&x_ptr,&y_ptr);

printf("x =%d y=%d",*x_ptr,*y_ptr);
}
void swapPointer(int** ptr1,int** ptr2)
{
    int* temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

