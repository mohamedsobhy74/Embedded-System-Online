/*
 * Ex1_12.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
int main(void)
{
	char ch;
	printf("enter a character\n");
	fflush(stdout);            fflush(stdin);
	scanf("%c",&ch);
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
	{
		printf("%c is an alphapet\n",ch);
	}
	else
	{
		printf("%c is not an alphapet\n",ch);
	}
}
