/*
 * Ex1_11.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
int main(void)
{
	int num;
	printf("enter a number\n");
	fflush(stdout);       fflush(stdin);
	scanf("%d",&num);
	if(num!=0)
	{
		if(num>0)
		{
			printf("%d is Positive",num);
		}
		else{
			printf("%d is negative",num);
		}
	}
	else
	{
		printf("You Entered Zero\n");
	}
}
