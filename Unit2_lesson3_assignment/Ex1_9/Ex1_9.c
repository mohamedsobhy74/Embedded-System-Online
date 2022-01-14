/*
 * Ex1_9.c
 *
 *  Created on: Jan 14, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
int main(void)
{
	char ch;
	printf("enter an alphabet\n");
	fflush(stdout);            fflush(stdin);
	scanf("%c",&ch);
	if((ch=='a')|(ch=='A')|(ch=='e')|(ch=='E')|(ch=='i')|(ch=='I')|(ch=='o')|(ch=='O')|(ch=='u')|(ch=='U'))
	{
		printf("%c is Vowel\n",ch);
	}
	else
	{
		printf("%c is Consonant\n",ch);
	}
}
