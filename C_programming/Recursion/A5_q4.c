#include<stdio.h>

void subset(int n)
{
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	printf("%d",
}

int main()
{
	int n;
	printf("Enter an positive integer: ");
	scanf("%d",&n);
	
	printf("{");
	subsets(n);
	printf("}");
	return 0;
}
