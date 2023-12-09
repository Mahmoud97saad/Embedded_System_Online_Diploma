/*
 *  EX7.c
 *  Solve Hardwork1 Problem.
 *  Created on: Dec 8, 2023
 *  Author: Mahmoud Saad
 */

/*
 * EX7:
 * it is an interview trick
 *
 * Write Source Code to Swap Two Numbers without temp variable.
 */


#include <stdio.h>

int main()
{
	float a =0 , b =0;
	printf("##########Console-output##########\n");

	printf("Enter value of a: ");

	fflush(stdin); fflush(stdout);

	scanf("%f",&a);

	printf("Enter value of b: ");

	fflush(stdin); fflush(stdout);

	scanf("%f",&b);

	a = a * b;
	b = a / b;
	a = a / b ;

	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f\n",b);

	printf("##################################");


	return 0;
}

