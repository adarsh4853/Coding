#include<stdio.h>

int search(int a[],int n,int num)
{
	int count=0;
	if (n < 0) 
	{
		return 0;
	}
	if(num == a[n]) 
	{
		count=1;
		return n;
	}
	else
	{
		count = search(a,n-1,num);
	}
	
}

int main()
{
	int n,num,flag=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter A[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter number: ");
	scanf("%d",&num);
	flag=search(a,n,num);
	if(flag>0)
	{
		printf("Number is present in A[%d]\n",flag);
	}
	else printf("Number is not present in array\n");
	return 0;
}
