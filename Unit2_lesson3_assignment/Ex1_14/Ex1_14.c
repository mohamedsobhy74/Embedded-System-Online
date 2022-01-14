/*
 * Ex1_14.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
int main(void)
{
	int n;
	printf("enter a number\n");
	fflush(stdout);   fflush(stdin);
	scanf("%d",&n);
	if(n<0)
	{
		printf("Error factorial of negative number doesn't exist\n");
	}
	else if(n==1)
	{
		printf("Factorial=1");
	}
	else
	{
		int fact=1;
		int i;
		for(i=1;i<=n;i++)
		{
			fact*=i;

		}
		printf("Factorial=%d",fact);
	}
}
