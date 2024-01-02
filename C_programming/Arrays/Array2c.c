#include<stdio.h>

int main()
{
	int m,n,count=0;
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
	
	int C[m+n],k=0;
	for(int i=0;i<m;i++)
	{
		C[k]=B[i];
		k++;
	}
	/*for(int j=0;j<n;j++)
	{
		for(;l<m;)
		{
			if(A[j]!=B[l])
			{
				C[k]=A[j];
				k++;
				l++;
			}
		}
	}*/
	for(int j = 0; j<n; j++)
	{
		for(int l = 0; l < m; l++)
		{
			if(A[j] == B[l]) break;
			else
			{
				C[k] = A[j];
				k++;
				break;
			}	
		}
	}
	for(int z=0;z<k;z++)
	{
		printf("C[%d] = %d\n",z,C[z]);
	}
	printf("\n");
	return 0;
}	
