#include<stdio.h>

float hrmean(int a[],int n)
{
	int p;
	if(n<0) p=0;
	else 
	{
		 p=1.0/a[n-1] + hrmean(a,n-1);
		 
	}
	return p;
}

int main()
{
	int a[10],n=0;
	
	for(int i=0;i<10;i++,n++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
		if(a[i]<0) break;
	}
	
	printf("Harmonic mean is %f\n",n/hrmean(a,n));
	return 0;  
}
