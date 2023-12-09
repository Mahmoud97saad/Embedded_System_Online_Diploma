/*
 *  EX6.c
 *  Solve Hardwork2 Problem.
 *  Created on: Dec 8, 2023
 *  Author: Mahmoud Saad
 */

/* EX6: C Program to Calculate Sum of Natural Numbers
 * Positive integers 1, 2, 3, 4... are known as natural numbers.
 * This program takes a positive integer
 * from user(suppose user entered n) then,
 * this program displays the value of 1+2+3+....n.
 * Output
 * Enter an integer: 100 Sum = 5050
 */


#include <stdio.h>

int main ()
{
	int x = 0, i =1, sum =0;

	printf("##########Console-output##########\n");

	printf("Enter an integer: ");

	fflush(stdin); fflush(stdout);

	scanf("%d",&x);

	for (;i<=x;i++)
	{
		sum+=i;
	}

	printf("Sum = %d\n",sum);
	printf("##################################");

	return 0;
}

