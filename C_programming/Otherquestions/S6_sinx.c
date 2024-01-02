#include<stdio.h>
#include<math.h>

int main()
{
	float x,term,sum=0;
	int n,d,y=1;
	
	printf("Enter x: ");
	scanf("%f",&x);
	
	//printf("Enter number of terms: ");
	//scanf("%d",&n);
	
	x=x*3.141592/180;
	
	d=1;
	term=x*1.0/d;
	for(int i=1;i<=100000;i++)
	{
		sum=sum+term;
		y=-y;
		term=y*1.0*(term*x*x)/((d+1)*(d+2));
		d=d+2;
	}
	printf("Value is %f\n",sum);
	
	/*d=1;
	term=x/d;
	for(int i=1;;i++)
	{
		sum+=term;
		y=-y;
		term=y*term*((x*x)/((d+1)*(d+2)));
		d=d+2;
		if(fabs(term)<=0.00001)
		{
			break;
		}
	}
	
	printf("Value is %f\n",sum);*/
	
	
	return 0;
	
}
