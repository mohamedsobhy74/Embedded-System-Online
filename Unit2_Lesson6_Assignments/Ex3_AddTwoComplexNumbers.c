/*
 * AddTwoComplexNumbers.c
 *
 *  Created on: Dec 30, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
struct complex{
	float real;
	float imaginary;
}num1,num2,sum;

void add(struct complex num1,struct complex num2);
int main(void)
{
	printf("For 1st complex number:\n");
	fflush(stdout);      fflush(stdin);
	printf("Enter Real and imaginary respectively:");
	fflush(stdout);       fflush(stdin);
    scanf("%f%f",&num1.real,&num1.imaginary);
    printf("For 2nd complex number:\n");
    	fflush(stdout);      fflush(stdin);
    	printf("Enter Real and imaginary respectively:");
    	fflush(stdout);       fflush(stdin);
    	scanf("%f%f",&num2.real,&num2.imaginary);
    	add(num1,num2);
    	printf("sum=%.1f+.%.1fi",sum.real,sum.imaginary);
    	return 0;
}
void add(struct complex num1,struct complex num2)
{
	struct sum;
	sum.real=num1.real+num2.real;
	sum.imaginary=num1.imaginary+num2.imaginary;
}

