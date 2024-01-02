#include<stdio.h>
#include<math.h>
#define max_deg 100

typedef struct rational
{
	int a;
	int b;
}rational;

typedef struct poly
{
	int degree;
	int coefficient[max_deg];
}poly;

rational reduced(rational x)
{
	int min;
	if(x.a>x.b) min=x.b;
	else min=x.a;
	for(int i=2;i<=min;i++)
	{
		if(x.a%i==0 && x.b%i==0)
		{
			x.a=x.a/i;
			x.b=x.b/i;
		}
	}
	return x;
}


rational sum(rational x,rational y)
{
	rational add;
	add.b=x.b*y.b;
	add.a=x.a*y.b+y.a*x.b;
	return reduced(add);	
}

rational evalpoly(poly f,rational x)
{
	rational z={0,1},temp={0,1};
	for(int i=0;i<=f.degree;i++)
	{
		temp.a=f.coefficient[i]*pow(x.a,i);
		temp.b=pow(x.b,i);
		z=sum(z,temp);	
	}
	return reduced(z);
}

void rationalRoots(poly f)
{
	int arr[100],brr[100],i=0,m=0;
	rational temp;
	for(int j=1;j<=f.coefficient[0];j++)
	{
		if(f.coefficient[0]%j==0)
		{
			arr[i++]=j;			
		}
	}
	for(int j=1;j<=f.coefficient[0];j++)
	{
		if(f.coefficient[f.degree+1]%j==0)
		{
			brr[m++]=j;			
		}
	}
	for(int k=0;k<i;k++)
	{
		rational fuck;
		for(int l=0;l<m;l++)
		{
			temp.a=arr[k];
			temp.b=brr[l];
			temp=reduced(temp);
			fuck=evalpoly(f,temp);
			if(fuck.a==0)
			{
				printf("%d/%d ",temp.a,temp.b);
			}
		}
	}
	for(int k=0;k<i;k++)
	{
		rational fuck;
		for(int l=0;l<m;l++)
		{
			temp.a=-arr[k];
			temp.b=brr[l];
			temp=reduced(temp);
			fuck=evalpoly(f,temp);
			if(fuck.a==0)
			{
				printf("%d/%d ",temp.a,temp.b);
			}
		}
	}
	printf("\n");
}

int main()
{
	rational x,y,red,red1,add,input,eval,roots;
	poly f;
	
	/*red=reduced(x);

	add=sum(x,y);
	printf("Addition is : %d/%d\n",add.a,add.b);*/
	
	printf("Enter the degree <100: ");
	scanf("%d",&f.degree);
	
	printf("Enter the coefficient: ");
	for(int i=0;i<=f.degree;i++)
	{
		scanf("%d",&f.coefficient[i]);
	}
	
	printf("Enter rational input: ");
	scanf("%d%d",&input.a,&input.b);
	
	eval=evalpoly(f,input);
	
	printf("The answer is : %d/%d\n",eval.a,eval.b);
	
	rationalRoots(f);
	
	return 0;
}









