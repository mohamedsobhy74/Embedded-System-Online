/*
 * EX2_addtwodistances.c
 *
 *  Created on: Dec 30, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
struct distance{
	int feet;
	float inch;
}distance1,distance2,sum;

int main(void)
{
	printf("Enter information for 1st distance:\n");
	fflush(stdout);  fflush(stdin);
	printf("Enter Feet:");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&distance1.feet);
	printf("Enter inch:");
	fflush(stdout);  fflush(stdin);
	scanf("%f",&distance1.inch);
	printf("Enter information for 2nd distance:\n");
	fflush(stdout);  fflush(stdin);
	printf("Enter Feet:");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&distance2.feet);
	printf("Enter inch:");
	fflush(stdout);  fflush(stdin);
	scanf("%f",&distance2.inch);
	sum.feet=distance1.feet+distance2.feet;
	sum.inch=distance1.inch+distance2.inch;
	if(sum.inch>12)
	{
		sum.inch=sum.inch-12;
		++sum.feet;
	}
	printf("Sum of distances=%d-%.2f",sum.feet,sum.inch);

}
