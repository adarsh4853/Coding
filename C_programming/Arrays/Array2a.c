#include<stdio.h>

int main()
{
	int m,n;
	printf("Enter m : ");
	scanf("%d",&m);
	printf("Enter n : ");
	scanf("%d",&n);
	
	int A[n],B[m];
	for(int i=0;i<n;i++)
	{
		printf("Enter A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	printf("************\n");
	for(int i=0;i<m;i++)
	{
		printf("Enter B[%d] = ",i);
		scanf("%d",&B[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				if(A[i]+A[j]==B[k])
				{
					if(i==j)
					{
						continue;
					}
					printf("A[%d]+A[%d]=B[%d]\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
