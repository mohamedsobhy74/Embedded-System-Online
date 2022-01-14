/*
 * Ex1_8.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
int main(void)
{
	int Num;
	printf("Enter an integer you want to check\n");
	fflush(stdout);            fflush(stdin);
	scanf("%d",&Num);
	if(Num%2==0)
	{
		printf("The Number is Even\n");
	}
	else
	{
		printf("The Number is odd\n");
	}
}
