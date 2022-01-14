/*
 * Ex1_10.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
int main(void)
{
	float first_num,second_num,third_num;
	printf("enter the three numbers\n");
	fflush(stdout);           fflush(stdin);
	scanf("%f %f %f",&first_num,&second_num,&third_num);
	if((first_num>second_num)&&(first_num>third_num))
	{
		printf("largest number=%.2f\n",first_num);
	}
	else if((second_num>first_num)&&(second_num>third_num))
	{
		printf("largest number=%.2f\n",second_num);
	}
	else if((third_num>first_num)&&(third_num>second_num))
	{
		printf("largest number=%.2f\n",third_num);
	}
	else
	{
		printf("not find the largest number");
	}
}
