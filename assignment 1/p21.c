/**************************************************************************************************
 Name        : ex20.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 20
 **************************************************************************************************/

#include <stdio.h>

int main(void)
{
	int i, j, rows,colums;
	
	printf("Enter number of rows: ");
     scanf("%d",&rows);
    printf("\n");
    printf("Enter number of colums: ");
    scanf("%d",&colums);
    printf("\n");
	/* Loop for each row */
	for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {
            if((i == j)||((i+j)== colums))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
	return 0;
}

