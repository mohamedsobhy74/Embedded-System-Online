/*
 * EX3.c
 *
 *  Created on: Feb 19, 2022
 *      Author: Mohamed Sobhy
 */


#include<stdio.h>
void Reverse();
int main()
{

	printf("please enter a sentence:\n");
	fflush(stdout);    fflush(stdin);
	Reverse();
	return 0;
}
void Reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		Reverse();
		printf("%c",c);
}
}
