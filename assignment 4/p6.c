#include <stdio.h>
int main()
{
  int arr[5] = {3,6,9,1,5};
  int *ptr[5];

  for(int i =0;i<5;i++)
  {
    ptr[i]=&arr[i];
  }
  int max =*ptr[0]; 
  for(int i =0;i<5;i++)
  {
    if((*ptr[i]) >max )
    {
        max =*ptr[i];
    }

    printf("%d ",*ptr[i]);
  }
  printf("\nmax = %d ",max);

}
