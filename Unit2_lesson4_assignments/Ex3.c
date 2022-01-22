//program to transpose matrix
#include<stdio.h>
int main(void)
{
	int r,c,i,j;
	int arr[10][10],trans[10][10];
	printf("enter row and columns of matrix:");
	fflush(stdout);    fflush(stdin);
	scanf("%d %d",&r,&c);
	printf("Enter Elements of matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter elements of a%d%d:",i+1,j+1);
			fflush(stdout);    fflush(stdin);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
			if(j==c-1) //second line
				printf("\n\n");
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=arr[i][j];//each row will be column
		}
	}
	printf("Transpose Matrix:\n");
		for(i=0;i<c;++i)
		{
			for(j=0;j<r;++j)
			{
				printf("%d\t",trans[i][j]);
				if(j==r-1)
					printf("\n");
			}
		}
}
