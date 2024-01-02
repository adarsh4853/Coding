#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand(time(0));
	int m,n;
	
	printf("Enter m: ");
	scanf("%d",&m);
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	int  a[m][n];
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=rand()%59+1;
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int t=0,r=n-1,d=m-1,l=0,c=0,count=0;
	for(;;)
	{
		if(count-1==m*n)
		{
			break;
		}
		if(c==0)
		{
			for(int i=l;i<=r;i++)
			{
				printf("%d ",a[t][i]);
			}
			t++;count++;
		}
		if(c==1)
		{
			for(int i=t;i<=d;i++)
			{
				printf("%d ",a[i][r]);
			}
			r--;count++;
		}
		if(c==2)
		{
			for(int i=r;i>=l;i--)
			{
				printf("%d ",a[d][i]);
			}
			d--;count++;
		}
		if(c==3)
		{
			for(int i=d;i>=t;i--)
			{
				printf("%d ",a[i][l]);
			}
			l++;count++;
		}
		c=(c+1)%4;
	}
	return 0;
}








