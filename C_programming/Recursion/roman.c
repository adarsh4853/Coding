#include<stdio.h>

void roman(int n);

int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	roman(n);
	return 0;
}

void roman(int num)
{
	if(num==1) 
	{
		printf("i");
		return;
	} 
	else if(num>=1000)
	{
		num=num-1000;
		printf("m");
	}
	else if(num>=500)
	{
		num=num-500;
		printf("d");
	}
	else if(num>=100)
	{
		num=num-100;
		printf("c");
	}
	else if(num>=50)
	{
		num=num-50;
		printf("l");
	}
	else if(num>=10)
	{
		num=num-10;
		printf("x");
	}
	else if(num>=5)
	{
		num=num-5;
		printf("v");
	}
	else if(num>1)
	{
		num=num-1;
		printf("i");
	}
	roman(num);
}
