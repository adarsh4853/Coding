#include<stdio.h>

int main()
{
	int a,b,c,d=1,e,n;
	printf("Enter integer: ");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		c=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				c=1;
				break;
			}
				
		}
		if(c==0)
		{
			e=i;
		}
		if(e-d==2)
		{
			printf("(%d,%d),",d,e);
		}
		if(c==0)
		{
			d=i;
		}
	} 
	return 0;
}
