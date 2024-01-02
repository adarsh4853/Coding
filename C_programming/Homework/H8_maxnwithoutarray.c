#include<stdio.h>

int main()
{
	int n,a;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter number: ");
	scanf("%d",&a);
	int min=a,max=a;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&a);
		if(min>a)
		{
			min=a;
		}
		if(max<a)
		{
			max=a;
		}
		
	}
	printf("minimum number is %d\n",min);
	printf("maximum number is %d\n",max);
	/*for(int i=0;i<n-1;i++)
	{
		scanf("%d",&a);
		if(max<a)
		{
			max=a;
		}
		
	}
	printf("maximum number is %d\n",max);*/
	return 0;
}
