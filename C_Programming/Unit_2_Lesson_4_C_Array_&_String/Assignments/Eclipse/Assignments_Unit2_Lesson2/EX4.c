/*
 * EX4.c
 * Solve Homework 3
 * Created on: Jan 5, 2024
 * Author: mahmoud Saad
 */
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int num,i,loc;
	printf("##########Console-output##########\n");
	printf("Enter no of elements : ");
	fflush(stdin);        fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		fflush(stdin);        fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Enter the elements to be inserted : ");

	fflush(stdin);        fflush(stdout);
	scanf("%d",&num);

	printf("Enter the location : ");

	fflush(stdin);        fflush(stdout);
	scanf("%d",&loc);

	for(i=n+1;i>=loc-1;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[loc-1]=num;
	for( i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}


}

*/
