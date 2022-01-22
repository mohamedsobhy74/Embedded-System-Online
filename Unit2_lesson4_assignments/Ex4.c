/*
 * EX4.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Mohamed Sobhy
 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int arr[30];
	int n;
	int e,l,i;
	printf("enter the no of elements\n");
	fflush(stdout);          fflush(stdin);
	scanf("%d",&n);
	printf("enter the values:\n");
	fflush(stdout);          fflush(stdin);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	fflush(stdout);          fflush(stdin);
	printf("enter the element to be inserted:\n");
	fflush(stdout);          fflush(stdin);
	scanf("%d",&e);
	fflush(stdout);          fflush(stdin);
	printf("enter the location:\n");
	fflush(stdout);          fflush(stdin);
	scanf("%d",&l);
	for(i=n;i>=l;i--)
	{
		arr[i]=arr[i-1];
	}
	n++;
	arr[l-1]=e;
	for(i=0;i<n;i++){

		printf("\t%d",arr[i]);
	}



}

