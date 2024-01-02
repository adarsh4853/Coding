#include<stdio.h>

void arraymax(int a[],int n)
{
	if(n<0) return;
	if(a[n]>a[n-1]) 
	{
		a[n-1]=a[n];
		arraymax(a,n-1);
	}
}

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	arraymax(a,n-1);
	printf("Largest element: %d\n",a[0]);
	return 0;
}

