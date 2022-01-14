/*
 * EX1_7.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */
#include<stdio.h>
int main(void)
{
	int num_1,num_2;
	printf("Please Enter First Number\n");
	fflush(stdout);            fflush(stdin);
	scanf("%d",&num_1);
	printf("Please Enter Second Number\n");
	fflush(stdout);            fflush(stdin);
	scanf("%d",&num_2);
	num_1=num_1^num_2;
	num_2=num_1^num_2;
	num_1=num_1^num_2;
	printf("Value of First Number after Swapping is:%d\n",num_1);
	printf("Value of First Second after Swapping is:%d\n",num_2);
}
