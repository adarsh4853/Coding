#include<stdio.h>

int path(int m,int n)
{
	int a=0;
	if(m==0  || n==0) return 1;
	else return path(m-1,n)+path(m,n-1);
}

int main()
{
	int m,n;
	printf("Enter m & n: ");
	scanf("%d%d",&m,&n);
	
	printf("Paths are %d\n",path(m,n));
	return 0;
}
