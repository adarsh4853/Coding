#include<stdio.h>
#define size 10 

int func(int a[][size],int n)
{
	int count=0,count2=0,flag=0;
	for(int q=0;q<n;q++)
	{
		for(int p=0;p<n;p++)
		{
			for(int l=q;l<n;l++)
			{
				for(int k=p;k<n;k++)
				{
					count=0;
					for(int i=0;i<n;i++)
					{
						if(a[k][i]==1) count ++;	
					}
					count2=0;
					for(int i=0;i<n;i++)
					{
						if(a[i][l]==1) count2 ++;	
					}
					if(count!=count2) flag=1;
				}
			}
		}
	}
	return flag;
}

int main()
{
	int n,flag=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[size][size];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter elements of row no %d : ",i+1);
		for(int j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}	
	}
	flag=func(a,n);
	if(flag==0) printf("Same\n");
	else printf("Not same\n");
	return 0;
}                                                                                                          
