#include<stdio.h>

int bin(int n)
{
	if(n==0 || n==1) return 1;
	else return (n%2)+bin(n/2)*10;
}

int main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	printf("Binary number is %d\n",bin(n));
	return 0;
}
