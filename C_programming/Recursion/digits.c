#include<stdio.h>

void digits(int x);

int main()
{
	int a;
	printf("Enter your input:: ");
	scanf("%d",&a);
	printf("Digits are : ");
	digits(a);
	return 0;
}

void digits(int x)
{
	if(x<1) return;
	int temp;
	temp=x%10;
	digits(x/10);
	printf("%d, ",temp);

}
