#include<stdio.h>
#include<stdlib.h>

int *func(int a[],int n)
{
	int *p,i,b[n],flag=0;
	p=b;
	for(i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			flag=0;
			if(a[i]==a[j]) 
			{
				flag=1;
				break;
			}	
		}
		if(flag==0) *(p+i)=a[i];
	}
	*(p+i)=0;
	//p=(int *) malloc(i*sizeof(int));
	for(int k=0;k<i;k++)
	{
		b[k]=*(p+k);
	}
	return p;
}

int main()
{
	int a[100],n,*ptr,m;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=func(a,n);
	while(*(ptr+m))
	{
		printf("%d  ",*(ptr+m));
		m++;
	}
	printf("\n");	
	return 0;
}
