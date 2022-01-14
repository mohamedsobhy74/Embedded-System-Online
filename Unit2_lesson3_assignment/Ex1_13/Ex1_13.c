/*
 * Ex1_13.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */
#include <stdio.h>
int main(void)
{
	int n,sum,i;
	printf("enter an integer\n");
	fflush(stdout);     fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;

	}
	printf("sum=%d",sum);
}

