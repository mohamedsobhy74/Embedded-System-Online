/*
 * EX1_4.c
 *
 *  Created on: Jan 12, 2022
 *      Author: Mohamed.Sobhi
 */

#include<stdio.h>
int main(void)
{
	float First_num,Second_num,Product;
	printf("enter two numbers:\n");
	fflush(stdout);    fflush(stdin);
	scanf("%f %f",&First_num,&Second_num);
	Product=First_num*Second_num;
	printf("Product:%f\n",Product);
}
