/*
 * EX4.c
 *
 *  Created on: Mar 3, 2022
 *      Author: Mohamed Sobhy
 */
#include<stdio.h>
int power(int n,int exp);
int main(void)
{
	int number,exp;
	printf("enter number:\n");
	fflush(stdout);      fflush(stdin);
	scanf("%d",&number);
	printf("enter power number(positive integer):\n");
	fflush(stdout);       fflush(stdin);
	scanf("%d",&exp);
	printf("%d^%d=%d",number,exp,power(number,exp));
	return 0;
}
int power(int n,int exp)
{
	if(exp!=0)
		return(n*power(n,exp-1));

	else
		return 1;


}
