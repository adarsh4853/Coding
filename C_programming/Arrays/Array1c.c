#include<stdio.h>

int main()
{
	int n,temp;;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int A[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter A[%d]= ",i);
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("A[%d] = %d\n",i,A[i]);
	}
	printf("***************************\n");
	if(n%2==0)
	{
		for(int j=0;j<n-1;j=j+2)
		{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
		for(int i=0;i<n;i++)
		{
			printf("A[%d] = %d\n",i,A[i]);
		}
	}
	else
	{
		for(int j=0;j<n-2;j=j+2)
		{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
		for(int i=0;i<n;i++)
		{
			printf("A[%d] = %d\n",i,A[i]);
		}
	}
	return 0;
}
