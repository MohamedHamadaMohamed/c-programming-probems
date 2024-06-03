#include <stdio.h>

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new);

int main()
{
int arr_old[10] = {1,2,3,3,3,4,4,5,5,5};
int arr_new[10] ={0};
int n_new =0 ;   
removeDuplicates(arr_old,  10, arr_new,&n_new);
for(int i =0;i<n_new;i++)
{
    printf("%d ",arr_new[i]);
}

}
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
{
arr_new[0]= arr_old[0];
int j =1;    
for(int i =0;i<n_old;i++)
{
    if(arr_old[i] !=arr_old[i+1])
    {
        arr_new[j] = arr_old[i+1];
        j++;
        (*n_new)++;
    }
}
}