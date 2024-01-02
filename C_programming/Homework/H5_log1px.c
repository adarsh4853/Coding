//print log(1+x)  value
//log(1+x)=x-x^2/2 +x^3/3 -x^4/4 +......... 
#include<stdio.h>

int main()
{
	float x, term, num,sum=0;
	
	printf ("enter x");
	scanf("%f",&x);
	
	x = x-1;
	
	int n,y=1;
	printf ("enter no of terms");
	scanf("%d",&n);
	
	num=x;
	
	for(int i=1;i<=n;i++)
	{
		term=y*(num/i);
		sum=sum+term;
		y=-y;
	}
	printf("the  value of log(1+x) is :%f\n",sum);

    	return 0;
}
