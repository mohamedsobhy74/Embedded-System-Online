/*
 * EX8.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
int main(void)
{
	char arr[1000],temp;
	int i=0;
	int j=0;
	printf("enter a string\n");
	fflush(stdout);  fflush(stdin);
	gets(arr);
	j=strlen(arr)-1;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	printf("reversed sting is:%s",arr);
}
