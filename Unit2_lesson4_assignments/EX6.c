/*
 * EX6.c
 *
 *  Created on: Jan 22, 2022
 *      Author: Mohamed Sobhy
 */
#include<stdio.h>
int main(void)
{
	char arr[100];
	char ch;
	int i,count=0;
	printf("enter a string\n");
	fflush(stdout);  fflush(stdin);
	gets(arr);
    printf("enter the character to be checked\n");
    fflush(stdout);    fflush(stdin);
    scanf("%c",&ch);
    for(i=0;arr[i]!='\0';i++)
    {
    	if(arr[i]==ch)
    		count++;
    }
    printf("the frequency of %c=%d",ch,count);
}
