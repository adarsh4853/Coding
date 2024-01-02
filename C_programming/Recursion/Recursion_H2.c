#include<stdio.h>

int count(int n,int a)
{	
	if (n == 0)
	{
		return a;
	}
	count(n/10,a+1);
	
}

int main()
{
	int n;
	printf("Enter integer: ");
	scanf("%d",&n);
	
	int digits;
	digits=count(n,0);
	
	printf("Number of digits are %d\n",digits);
	return 0;
}
