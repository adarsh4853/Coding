#include<stdio.h>

float newtonRaphson(int n);

int main()
{
	int n;
	printf("Enter a number >=10 : ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		printf("Cube root of %d : %f\n",i,newtonRaphson(i));
	}
	return 0;
}

float newtonRaphson(int n)
{
	for(int 
	if(((0.5*0.5*0.5)-n)/(3*0.5*0.5) < 0.001);
}
