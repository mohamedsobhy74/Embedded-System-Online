/*
 * EX7.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Mohamed Sobhy
 */
#include<stdio.h>
int main(void)
{
	char arr[1000];
	printf("enter a string\n");
	int count=0;
	fflush(stdout);  fflush(stdin);
	gets(arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		++count;
	}
	printf("the length of string is:%d",count);
}

