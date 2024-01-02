#include<stdio.h>
#include<math.h>

int main()
{
	int m,n,a,b,c,d,min,term;
	printf("Enter m: ");
	scanf("%d",&m);
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	printf("m : %d\n",m);
	printf("n : %d\n",n);
	
	for(int i=1;;i++)
	{
		if(i%m==0 && i%n==0)
		{
			printf("LCM is %d\n",i);
			break;
		}
		
	}
	int p;
	for(int i=0;;i++)
	{
		printf("Enter p: ");
		scanf("%d",&p);
		
		if(p>3 && p<20)
		{
			break;
		}
		else
		{
			printf("Enter the number again\n");
		}
	}
	printf("p : %d\n",p);
	float X[20],Y[20];
	for(int j=0;j<p;j++)
	{
		printf("Enter x-coordinate: ");
		scanf("%f",&X[j]);
		printf("Enter y-coordinate: ");
		scanf("%f",&Y[j]);
		printf("\n");
	}
	for(int j=0;j<p;j++)
	{
		printf("(%f,%f) ",X[j],Y[j]);
	}
	printf("\n");
	min=sqrt(pow((X[0]-X[0+1]),2)+pow((Y[0]-Y[0+1]),2));
	a=X[0],b=Y[0],c=X[1],d=[1];
	term=sqrt(pow((X[k+1]-X[k+2]),2)+pow((Y[k+1]-Y[k+2]),2));
	for(int k=0;k<p-2;k++)
	{
		term=sqrt(pow((X[k+1]-X[k+2]),2)+pow((Y[k+1]-Y[k+2]),2));
		if(min>term)
		{
			min=term;
			a=X[k+1];
			b=Y[k+1];
			c=X[k+2];
			d=Y[k+2];
		}
	}
	printf("Minimum distance : %d",min);
	printf("Closest points are (%d,%d),(%d,%d)",a,b,c,d);
	return 0;
}
