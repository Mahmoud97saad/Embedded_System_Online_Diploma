/*
 * EX3.c
 * Solve Homework 4
 * Created on: Jan 30, 2024
 * Author: mahmoud saad
 */

/*
 * C program to Reverse a Sentence Using Recursion
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversestr(char*str,int len)
{
	if(len>=0)
	{
		printf("%c",str[len]);
		reversestr(str,len-1);
	}
}


int main()
{
	char str[50];
	printf("##########Console-output##########\n");
	printf("Enter a sentence: ");
	fflush(stdin);         fflush(stdout);
	gets(str);
	reversestr(str,strlen(str)-1);
}


