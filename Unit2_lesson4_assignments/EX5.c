/*
 * EX5.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Mohamed Sobhy
 */
#include<stdio.h>
int main(void)
{
	int arr[10];
	int num,i,s;
	printf("enter the no of elements\n");
	fflush(stdout);   fflush(stdin);
	scanf("%d",&num);
	printf("enter the numbers:\n");
	fflush(stdout);   fflush(stdin);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number to be searched\n");
	fflush(stdout);    fflush(stdin);
	scanf("%d",&s);
	i=0;
	while(i<num&&s!=arr[i])
	{
		i++;
	}
	if(i<num)
	{
		printf("the number you found at location:%d\n",i+1);
	}
	else
	{
		printf("number not found\n");
	}
}

