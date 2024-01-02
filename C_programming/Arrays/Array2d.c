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
	
	int sum=m+n;
	int C[sum],k=0;
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<m;j++)
		{
			if(A[i]==B[j])
			{
				count=1;
			}
			//C[k]=A[i];
			//k++;	
		}
		if(count==0)
		{
			C[k]=A[i];
			k++;
		}
	}
	for(int i=0;i<k;i++)
	{
		printf("%d ",C[i]);
	}
	//printf("are common elements\n");
	return 0;
}	
