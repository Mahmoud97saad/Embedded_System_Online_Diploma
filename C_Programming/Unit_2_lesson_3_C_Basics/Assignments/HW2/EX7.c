/*
 *  EX7.c
 *  Solve Hardwork2 Problem.
 *  Created on: Dec 8, 2023
 *  Author: Mahmoud Saad
 */

/* EX7: C Program to Find Factorial of a Number
 * For any positive numbern, its factorial is given by:
 * factorial = 1*2*3*4....n If a number is negative,
 * factorial does not exist and factorial of 0 is 1.
 * This program takes an integer from a user.
 * If user enters negative integer,
 * this program will display error message
 * and if user enters non-negative integer,
 * this program will display the factorial of that number.
 * Output 1
 * Enter an integer: -5
 * Error!!! Factorial of negative number doesn't exist.
 * Output 2
 * Enter an integer: 10 Factorial = 3628800
 */


#include <stdio.h>

int main ()
{
	int x = 0, i =1, Fac =1;

	printf("##########Console-output##########\n");

	printf("Enter an integer: ");

	fflush(stdin); fflush(stdout);

	scanf("%d",&x);

	if(x > 0)
	{

		for (;i<=x;i++)
		{
			Fac*=i;
		}
		printf("Factorial = %d\n",Fac);
	}
	else if (x == 0)
		printf("Factorial = 1\n");
	else
		printf("Error!!! Factorial of negative number doesn't exist.\n");

	printf("##################################");

	return 0;
}


