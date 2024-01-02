#include<stdio.h>

void primefactor(int n)
{
	int i;
	if(n==1)
	{ 
		printf("\n");
		return;
	}
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			break;
		}
	}
	primefactor(n/i);
}

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	primefactor(n);
	return 0;
}
