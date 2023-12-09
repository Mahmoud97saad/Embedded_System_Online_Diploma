/*
 *  EX5.c
 *  Solve Hardwork2 Problem.
 *  Created on: Dec 8, 2023
 *  Author: Mahmoud Saad
 */

/*EX5: C Program to Check Whether a Character is an Alphabet or not
 * This program takes a character from user and checks whether that character is an alphabet or not.
 * Output 1
 * Enter a character: *
 * * is not an alphabet
 * Output 2
 * Enter a character: K
 * K is an alphabet
 */

#include <stdio.h>

int main ()
{
	char x = 0;

	printf("##########Console-output##########\n");

	printf("Enter a character: ");

	fflush(stdin); fflush(stdout);

	scanf("%c",&x);

	if ((x>= 'a' && x<= 'z') || (x>= 'A' && x<= 'Z'))
		printf("%c is an alphabet.\n",x);
	else
		printf("%c is not an alphabet.\n",x);



	printf("##################################");

	return 0;
}
