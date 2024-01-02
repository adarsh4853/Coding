#include<stdio.h>
#define size 100

int product(int a[][size],int b[][size],int prod[][size],int m,int n, int p)
{
	int sum=0,i,j;
	for(int l=0;l<m;l++)
	{
		for(int k=0;k<p;k++)
		{
			sum=0;
			for(int i=0;i<n;i++)
			{
				sum +=a[l][i] * b[i][k];
				prod[l][k]=sum;
			}
		}
	}
}

int main()
{
	int m,n,p;
	printf("Enter m: ");
	scanf("%d",&m);
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	printf("Enter p: ");
	scanf("%d",&p);
	
	int a[m][size],b[n][size],prod[m][size];
	
	for(int i=0;i<m;i++)
	{
		printf("Enter elements of row no %d : ",i+1);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	
	for(int i=0;i<n;i++)
	{
		printf("Enter elements of row no %d : ",i+1);
		for(int j=0;j<p;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	product(a,b,prod,m,n,p);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			printf("%d  ",prod[i][j]);
		}
		printf("\n");
	}
	return 0;
}
