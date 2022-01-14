/*
 * EX1_3.c
 *
 *  Created on: Jan 12, 2022
 *      Author: Mohamed.Sobhi
 */

#include<stdio.h>
int main(void)
{
	int First_int,Second_int;
	int sum=0;
	printf("Enter two integers:\n");
	fflush(stdout);         fflush(stdin);
	scanf("%d %d",&First_int,&Second_int);
	sum=First_int+Second_int;
	printf("Sum:%d\n",sum);


}
