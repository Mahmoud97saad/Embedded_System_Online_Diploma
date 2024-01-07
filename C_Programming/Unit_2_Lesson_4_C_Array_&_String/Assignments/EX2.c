/*
 * EX2.c
 * Solve Homework 3
 *  Created on: Jan 4, 2024
 *  Author: mahmoud Saad
 */

/*EX2: C Program to Calculate Average Using Arrays
 *This program takes n number of element from user(where, n is specified by user),
 *This stores data in an array and calculates the average of those numbers.
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i =0;
	float avg=0;
	printf("##########Console-output##########\n");
	printf("Enter the numbers of data: \n");
	fflush(stdin);     fflush(stdout);
	scanf("%d",&n);

	float arr[n];

	for(;i<n;i++)
	{
		printf("Enter number: ");
		fflush(stdin);     fflush(stdout);
		scanf("%f",&arr[i]);
		avg+=arr[i];
	}
	avg/=n;
	printf("Average = %f",avg);
}

