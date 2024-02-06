/*
 *  EX8.c
 *  Solve Hardwork2 Problem.
 *  Created on: Dec 8, 2023
 *  Author: Mahmoud Saad
 */

/*
 * EX8: C Program to Make a Simple Calculator to Add, Subtract, Multiply
 * or Divide Using switch ... case
 * This program takes an arithmetic operator(+,-,*,/)
 * and two operands from an user and performs the operation on those two operands depending upon the operator entered by user.
 * Output
 * Enter operator either + or - or * or divide : -
 * Enter two operands: 3.4
 * 8.4
 * 3.4 - 8.4 = -5.0
 */

#include <stdio.h>

int main ()
{
	char op = 0;

	float a =0, b =0, result =0;

	printf("##########Console-output##########\n");

	printf("Enter operator either + or - or * or divide ");

	fflush(stdin); fflush(stdout);

	scanf("%c",&op);
	printf("Enter two operands: ");

	fflush(stdin); fflush(stdout);

	scanf("%f",&a);

	fflush(stdin); fflush(stdout);

	scanf("%f",&b);
	switch(op)
	{
	case '+':
		result = a +b;
		break;
	case '-':
		result = a -b;
		break;
	case '*':
		result = a *b;
		break;
	case '/':
		result = a/b;
		break;
	default:
		break;
	}

	printf("%f %c %f = %f\n", a,op,b,result);

	printf("##################################");

	return 0;
}



