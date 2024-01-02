#include<stdio.h>

void copy(int a[],int b[],int n)
{
	if(n<0) return;
	else 
	{
		b[n]=a[n];
		copy(a,b,n-1);
	}
}

int main()
{
	int a[5],b[5];
	printf("Enter elements of a: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	copy(a,b,5);
	for(int i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
}
