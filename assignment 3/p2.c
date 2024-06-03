#include <stdio.h>

int distinct(char* arr,int size);
int main()
{
char arr[10] ;

scanf("%s",&arr);
    if(distinct( arr,10))
    {
        printf("distinct");
    }
    else
    {
        printf("not distinct");

    }
}
int distinct(char* arr,int size)
{
    int i=0;
    int j =1;
    while(arr[i] != '\0' )
    {
        while(arr[j] != '\0')
        {
            if(arr[i] == arr[j])
            {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;

}
