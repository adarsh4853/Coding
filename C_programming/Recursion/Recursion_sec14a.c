#include<stdio.h>

int s(int n,int k)
{
	if(n==0 && k==0) return 1;
	if(k==0 && n>0) return 0;
	if(k>n) return 0;
	if(n>0 && k>0 && k<=n) return ((n-1)*s(n-1,k) + s(n-1,k-1));
}

int main()
{
	int n,k;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter k: ");
	scanf("%d",&k);
	
	printf("s(%d,%d) = %d \n",n,k,s(n,k));
	return 0;
}
