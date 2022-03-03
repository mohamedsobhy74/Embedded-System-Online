/*
 * EX1.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Mohamed Sobhy
 */

#include<stdio.h>

int prime_number(int x);

int main()
{
	int num1,num2,T,flag;
	printf("enter two numbers(intervals):\n");
	fflush(stdout);        fflush(stdin);
	scanf("%d %d",&num1,&num2);
	for(T=num1+1;T<num2;T++)
	{
		flag=prime_number(T);
		if(flag==0) //prime number
			printf("%d ",T);
	}
	return 0;


}
int prime_number(int x)
{
	int i,flag=0;
  for(i=2;i<=x/2;i++) // i=2 which i used to know number is prime or not
  {
	 if(x%i==0)
	 {
		 flag=1;// even number
		 break;
	 }
  }
  return flag;
}
