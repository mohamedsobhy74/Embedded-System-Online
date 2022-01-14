/*
 * Ex1_15.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
int main(void)
{
	char operator;
	float op1,op2;
	printf("enter operator either + or - or * or divide:");
	fflush(stdout);    fflush(stdin);
	scanf("%c",&operator);
	printf("enter two operands\n");
	fflush(stdout);    fflush(stdin);
	scanf("%f %f",&op1,&op2);
	switch (operator)
	{
	case '+':
	printf("%2.f+%2.f=%2.f",op1,op2,op1+op2);
	break;
	case '-':
		printf("%2.f+%2.f=%2.f",op1,op2,op1-op2);
break;
case '*':

	printf("%2.f*%2.f=%2.f",op1,op2,op1*op2);

break;
case '/':

	printf("%2.f/%2.f=%2.f",op1,op2,op1/op2);

break;

}
}
