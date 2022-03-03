/*
 * EX2.c
 *
 *  Created on: Feb 19, 2022
 *      Author: Mohamed Sobhy
 */


#include<stdio.h>
int factorial(int num);
int main(void)
{
	int num;
   printf("Enter an positive integer\n");
   fflush(stdout);    fflush(stdin);
   scanf("%d",&num);
   printf("Factorial of %d=%d",num,factorial(num));
}
int factorial(int num)
{

if(num!=1)
	return num*factorial(num-1);


}
