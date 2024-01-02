#include<stdio.h>
#include<math.h>

int func(int a,int t,int count,int sum,int j)
{
	if(count==t)
	{
		return sum;
	}
	else
	{
		j*=++j;
		j*=++j;
		return sum+pow(-1,count+1)*a*a*func(a,t,count+1,sum,j)/j;
	}	
}

int main()
{
	printf("%d\n",func(5,5,0,4,0));
	return 0;
}
