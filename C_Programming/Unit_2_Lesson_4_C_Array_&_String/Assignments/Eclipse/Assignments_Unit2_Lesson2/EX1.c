/*
 * EX1.c
 * Solve Homework 3
 * Created on: Jan 3, 2024
 * Author: mahmoud Saad
 */

/*EX1: Example of Multidimensional Array In C
 *Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where,
 *elements of matrix are entered by user.
 */

/*
#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int summatrix[2][2];
	int i,j;

	printf("##########Console-output##########\n");

	printf("Enter the elements of 1st matrix\n");


	for( i=1; i<=2;i++)
	{
		for( j =1;j<=2;j++)
		{
			printf("Enter a%d%d: ",i,j);
			fflush(stdin);      fflush(stdout);
			scanf("%d",&matrix1[i-1][j-1]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");

	for( i=1; i<=2;i++)
	{
		for( j =1;j<=2;j++)
		{
			printf("Enter a%d%d: ",i,j);
			fflush(stdin);      fflush(stdout);
			scanf("%d",&matrix2[i-1][j-1]);
		}
	}

	printf("Sum of Matrix: \n");

	for( i =0;i<2;i++)
	{
		for( j =0;j<2;j++)
		{
			summatrix[i][j]=matrix1[i][j] + matrix2[i][j];
			printf("%d   ",summatrix[i][j]);
		}
		printf("\n");
	}



}


*/

