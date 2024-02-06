/*
 * EX1.c
 * Solve Homework 4
 * Created on: Jan 30, 2024
 * Author: mahmoud saad
 */


/* EX1: Prime Numbers Between two Intervals by Making User-defined Function
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isprime(int num)
{
	int inital =2 ;
	int flag =1;
	for(inital;inital<=num-1;inital++)
	{
		if(num%inital == 0)
		{
			flag =0;
			break;
		}
	}
	return flag;
}


int main()
{

	int low, high;
	printf("##########Console-output##########\n");

	printf("Enter two numbers(intervals): ");
	fflush(stdin);            fflush(stdout);
	scanf("%d",&low);
	fflush(stdin);            fflush(stdout);
	scanf("%d",&high);
	printf("Prime numbers between %d and %d are: ",low,high);

	for(low;low<=high;low++)
	{
		if(isprime(low))
			printf("%d ",low);
		else
			continue;
	}

}


