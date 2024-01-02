#include<stdio.h>

int rec_lar2dig(int n,int count,int max)
{
	if(n<10)
	{
		return max;
	}
	else
	{
		count=n%100;
		if(count>max) max=count;
		rec_lar2dig(n/10,count,max);
	}
}

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	printf("Largest two-digits subsequece is %d\n",rec_lar2dig(n,0,0));
	return 0; 
}
