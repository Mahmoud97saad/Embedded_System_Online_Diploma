/*
 * EX2.c
 * Homework 3 HW:Strings
 * Created on: Jan 5, 2024
 * Author: mahmoud Saad
 */

/* EX2: C Program to Find the Length of a String
 * You can use standard library function strlen()
 * to find the length of a string but, this program
 * computes the length of a string manually without using
 * strlen() funtion.
 */


#include <stdio.h>
#include <stdlib.h>


int main ()
{
	char str[100];
	int i,count =0;
	printf("##########Console-output##########\n");
	printf("Enter a string: ");
	fflush(stdin);        fflush(stdout);
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
	count++;
	}
	printf("Length of string: %d",count);

	}

