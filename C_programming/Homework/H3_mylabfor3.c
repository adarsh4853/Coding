#include<stdio.h>

int main()
{
	int n,digit,count=0,divider=1,y,lowerrange,upperrange,c=0,d=0;
	double x,digit2;
	printf("Enter number: ");
	scanf("%d",&n);
	int q,m=n;
	
	while(m>=1)
	{
		digit=m%10;
		m=m/10;
		//printf("Digit: %d\n",digit);
		count++;
	}
	printf("number of digits: %d\n",count);
	m=n;
	/*while(m>=1)
	{
		digit=m/10;
		m=m/10;
		if(digit!=0) 
		{
		printf("%d,",digit);
		}
	}
	printf("\b");*/
	for(int j=1;j<=count;j++)
	{
		divider=divider*10;
	}
	x=n*1.0/divider;
	for(int i=0;i<count;i++)
	{
		x = 10*x*1.0;
		y=x;
		printf("%d,",y);
	}
	
	printf("\n");
	m=n,q;
	/*for(int i=1;i<n;i++)
	{
		if(i*i==n)
		{
			printf("%d is perfect square of %d\n",n,i);
			break;
		}
		else
		{
			for(int j=1;;j++)
			{
				m=m-1;
				for(int k=1;k<m;k++)
				{
					if(k*k==m)
					{
						//printf("%d is perfect square of %d\n",n,i);
						lowerrange=m;
						c=1;
						break;
					}
				}
				if(c==1)
				{
					break;
				}	
			}
			for(int j=1;;j++)
			{
				q=q+1;
				/*if(j*j==q)
				{
					//printf("%d is perfect square of %d\n",n,i);
					upperrange=q;
					break;
				}*/
				/*for(int k=1;k<q;k++)
				{
					if(k*k==q)
					{
						//printf("%d is perfect square of %d\n",n,i);
						upperrange=m;
						d=1;
						break;
					}
				}
				if(d==1)
				{
					break;
				}		
			}
			printf("Square root belongs: [%d,%d]\n",lowerrange,upperrange);
			break;
		}*/
		int p;
    for (int j = 0;; j++)
    {
        p = j * j - n;
        if (p == 0)
        {
            printf("\nSquare root of %d is %d", n, j);
            break;
        }
        if(p > 0){
            printf("\nSquare root of %d is between [%d,%d]",n,j-1,j);
            break;
        }
    }
		
	
	return 0;
}
