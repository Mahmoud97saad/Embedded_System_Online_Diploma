/*
 * EX2.c
 * Homework 3 HW:Strings
 * Created on: Jan 5, 2024
 * Author: mahmoud Saad
 */

/* EX3: C Program to Reverse String Without Using Library Function
 * You can only use library function strlen(), To find the length of the string
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
	char str[100];
	int i;
	char temp;
	printf("##########Console-output##########\n");
	printf("Enter a string: ");
	fflush(stdin);        fflush(stdout);
	gets(str);
	if(strlen(str)<=1)
	{
		printf("Reverse string is :");
		puts(str);

	}
	else{
	int len = strlen(str)-1;

	for(i=0;i<(strlen(str)/2);i++)
	{
	temp = str[i];
	str[i]=str[len];
	str[len]=temp;
	len--;
	}
	printf("Reverse string is :");
	puts(str);
	}

}
