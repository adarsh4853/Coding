#include<stdio.h>

int fact(int n)
{
	if(n==0 || n==1) return 1;
	else return n*fact(n-1);	
}

void rec_eval_f(int x,int n,int term,int sum,int coeff)
{
	if(n<1) return;
	sum=sum+term;
	coeff++;
	term=(term * x * coeff)/((coeff-1)*(coeff-1));
	printf("sum=%d\nterm=%d\n",sum,term);
	rec_eval_f(x,n-1,term,sum,coeff);
}




int main()
{
	int x,n;
	printf("Enter x between 0 and 1: ");
	scanf("%d",&x);
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	rec_eval_f(x,n,1,0,1);
	return 0;
}
