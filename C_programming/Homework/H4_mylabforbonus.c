#include<stdio.h>

int main()
{
	int num,n,m,sum=0,j=2;
	printf("Enter number: ");
	scanf("%d",&num);
	
	n=num;
	/*while(n>=1)
	{
		m=n%10;
		sum += m;
		n=n/10;
	}
	printf("Sum of digits is %d",sum);*/
	
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
		sum += i;
		}
	}
	if(num==sum)
	{
		printf("A perfect number\n");
	}
	else
	{
		printf("Not a perfect number\n");
	}
	return 0;
}
