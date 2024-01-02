#include<stdio.h>

int main()
{
	int n,flag=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n][n];
	
	for(int i=0;i<n;i++)
	{
		printf(" Enter elements of row no %d : ",i+1);
		for(int j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}	
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i][j]!=0) flag=1;
		}	
	}
	
	if(flag==0) printf("Upper triangle matrix\n");
	else printf("Not a Upper triangle matrix\n");
	
	flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[i][j]!=0) flag=1;
		}	
	}
	
	if(flag==0) printf("lower triangle matrix\n");
	else printf("Not a lower triangle matrix\n");
	
	flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i][i]!=0) flag=1;
	}
	
	if(flag==0) printf("diagonal matrix\n");
	else printf("Not a diagonal matrix\n");
	
	flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=0) flag=1;
		}	
	}
	
	if(flag==0) printf("Identity matrix\n");
	else printf("Not identity matrix\n");
	return 0;
}
