/*
 * EX1.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>

int main(void)
{
	float a[2][2];
	float b[2][2];
	float s[2][2];
	int i,j;
	//int i,j,x,z,q,m;
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<2;i++)  //for rows of first matrix
	{

		for(j=0;j<2;j++) //inner loop for colums of second matrix
		{
			printf("enter a%d%d:",i+1,j+1);
			fflush(stdout);       fflush(stdin);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<2;i++)
	{

		for(j=0;j<2;j++)
		{
			printf("enter b%d%d:",i+1,j+1);
			fflush(stdout);       fflush(stdin);
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s[i][j]=a[i][j]+b[i][j];// sum of two matrices
		}
	}
	printf("sum of Matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.2f\t",s[i][j]);
			if (j==1)
		    printf("\n");
		}

	}
}
