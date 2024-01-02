#include<stdio.h>

int sum(int n)
{	
	if(n<10) return n;
	else return n%10+sum(n/10);	
}	

int main()
{
	int n;
	printf("Enter integer: ");
	scanf("%d",&n);
	
	int digits;
	digits=sum(n);
	
	printf("sum is %d\n",digits);
	return 0;
}
