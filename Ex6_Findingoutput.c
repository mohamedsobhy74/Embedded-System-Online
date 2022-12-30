/*
 * Ex6_Findingoutput.c
 *
 *  Created on: Dec 31, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
union job{
	char nam[32];
	float salary;
	int worker;
}u;
struct job1{
	char nam[32];
	float salary;
	int worker;
}s;
int main()
{
	printf("%d\n",sizeof(u));
	fflush(stdout);   fflush(stdin);
	printf("%d",sizeof(s));
		fflush(stdout);   fflush(stdin);

}
