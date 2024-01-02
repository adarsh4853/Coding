#include<stdio.h>

void sumM(int a[][4],int b[][4],int sum[][4])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
}

int main()
{
	int a[3][4],b[3][4],sum[3][4];
	for(int i=0;i<3;i++)
	{
		printf("Enter the elements of matrix A, row no. %d : ",i+1);
		for(int j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		printf("Enter the elements of matrix B, row no. %d : ",i+1);
		for(int j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	sumM(a,b,sum);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
