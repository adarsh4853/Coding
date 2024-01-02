#include<stdio.h>
#include <math.h>

int main()
{	float a1,b1,mean,sum=0,x,f;
	int num;
	printf("Enter a number >=10: ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{	a1=0;
		b1=i+1;
		x =(a1+b1)/2;
		f = pow(x,3)-i;
		while(1)
		{	
			if(f<0) {
			a1=(a1+b1)/2;
		        x=a1;
		        f = pow((x+b1)/2,3)-i;
		        }
			
			else if(f>0) {
			b1=(b1+a1)/2;
		        x=b1;
		        f = pow((x+a1)/2,3)-i;
		        }
		        
			if((fabs(f)) < 0.001) {
			printf("Cube root of %d: %f, Actual = %f\n",i,x,cbrt(i));
			break;
			}
		}
		
	}
	return 0;
}
	
			
		
		
