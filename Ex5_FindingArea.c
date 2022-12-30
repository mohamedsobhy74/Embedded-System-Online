/*
 * Ex5_FindingArea.c
 *
 *  Created on: Dec 31, 2022
 *      Author: Mohamed Sobhy
 */


#include<stdio.h>
#define pi 3.14
#define area(r) (pi*r*r)
int main(void)
{
	int radius;
	float area;
	printf("Enter Radius:");
	fflush(stdout);    fflush(stdin);
	scanf("%d",&radius);
	area=area(radius);
	printf("%.2f",area);
}
