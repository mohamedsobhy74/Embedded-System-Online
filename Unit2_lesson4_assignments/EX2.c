
#include<stdio.h>
int main(void)
{

	int n;
	float sum=0.0;
	float arr[100];
	printf("Enter the numbers of data:\n ");
	fflush(stdout);        fflush(stdin);
	scanf("%d",&n);
	while(n>100||n<=0)
	{
		printf("error you should enter number in range of 0 to 100\n");
		printf("Enter the numbers of data:\n ");
		fflush(stdout);        fflush(stdin);
		scanf("%d",&n);
	}
	for(int i=0;i<n;i++)
	{
		printf("enter number:");
		fflush(stdout);         fflush(stdin);
		scanf("%f",&arr[i]);
		sum+=arr[i];

	}
	printf("Average:%.2f",sum/n);
}
