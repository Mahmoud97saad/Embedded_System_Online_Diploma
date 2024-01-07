/*
 * EX3.c
 * Solve Homework 3
 *  Created on: Jan 4, 2024
 *  Author: mahmoud Saad
 */

/*EX3: C Program to Find Transpose of a Matrix
 *This program asks user to enter a matrix (size of matrix is specified by user)
 *and this program finds the transpose of that matrix and displays it.
 */

#include "stdio.h"

#include "stdlib.h"
int main()
{
	int row, col;
	int i=0,j=0;
	printf("##########Console-output##########\n");
	printf("Enter the rows and column of matrix:");
	fflush(stdin);     fflush(stdout);
	scanf("%d",&row);
	fflush(stdin);     fflush(stdout);
	scanf("%d",&col);

	int arr[row][col];

	printf("Enter elements of matrix:\n");


	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("Enter elements a%d%d:",i,j);
		fflush(stdin);     fflush(stdout);
			scanf("%d",&arr[i-1][j-1]);
		}
	}
	printf("Entered Matrix:\n");

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");

	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d  ",arr[j][i]);
		}
		printf("\n");
	}

}


