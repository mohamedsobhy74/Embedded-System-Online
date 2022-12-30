/*
 * Ex1_storeinformation.c
 *
 *  Created on: Dec 30, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>
struct info{
	char name[50];
	int roll;
	float marks;
}students;
int main(void)
{
	printf("Enter Information of Students:\n");
	fflush(stdout);       fflush(stdin);
	printf("Enter Name:");
	fflush(stdout);       fflush(stdin);
	scanf("%s",&students.name);
	printf("Enter roll number:");
	fflush(stdout);       fflush(stdin);
	scanf("%d",&students.roll);
	printf("Enter marks:");
	fflush(stdout);       fflush(stdin);
	scanf("%f",&students.marks);
	printf("Displaying information:");
	fflush(stdout);       fflush(stdin);
	printf("Name:%s\n",students.name);
	fflush(stdout);       fflush(stdin);
	printf("roll number:%d\n",students.roll);
	fflush(stdout);       fflush(stdin);
	printf("Marks:%.2f\n",students.marks);
	fflush(stdout);       fflush(stdin);
}
