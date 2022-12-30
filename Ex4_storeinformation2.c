/*
 * Ex4_storeinformation2.c
 *
 *  Created on: Dec 30, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;
};
int main(void)
{
	struct student s[10];
	int i;
	printf("Enter information of students:\n ");
	fflush(stdout);        fflush(stdin);
	for(i=0;i<10;i++)
	{

		printf("information for roll number%d\n",i+1);
		fflush(stdout);   fflush(stdin);
		printf("Enter name:");
		fflush(stdout);     fflush(stdin);
		scanf("%s",&s[i].name);
		printf("Enter marks:");
		fflush(stdout);     fflush(stdin);
		scanf("%f",&s[i].marks);
	}
	fflush(stdout);       fflush(stdin);
	printf("Displaying information of students:\n");
	fflush(stdout);       fflush(stdin);
	for(i=0;i<10;i++)
	{
		s[i].roll=i+1;
		printf("information for roll number:%d\n ",i+1);
		fflush(stdin);   fflush(stdout);
		printf("Name:%s",s[i].name);
		fflush(stdin);       fflush(stdout);
		printf("\n");
		fflush(stdout);    fflush(stdin);
		printf("marks:%.2f",s[i].marks);
		fflush(stdin);       fflush(stdout);
		printf("\n");
		fflush(stdout);    fflush(stdin);

	}
   return 0;
}
