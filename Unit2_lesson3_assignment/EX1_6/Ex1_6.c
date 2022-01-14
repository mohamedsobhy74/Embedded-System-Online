/*
 * Ex1_6.c
 *
 *  Created on: Jan 12, 2022
 *      Author: Mohamed.Sobhi
 */

#include<stdio.h>

int main(void)
{
	float first_num,second_num;
	float temp;
	printf("Enter Value of First Number:\n");
	fflush(stdout);        fflush(stdin);
	scanf("%f",&first_num);
	printf("Enter Value of Second Number:\n");
	fflush(stdout);        fflush(stdin);
	scanf("%f",&second_num);
	temp=first_num;
	first_num=second_num;
	second_num=temp;
	printf("After Swapping, value of first number:%f\n",first_num);
	printf("After Swapping, value of second number:%f\n",second_num);
}
