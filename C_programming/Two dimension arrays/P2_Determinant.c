#include<stdio.h>
#define size 10

int det(int n, int a[][size],int temp)
{
	int d=0,subm[n][n],sign=1;
	if(n==1) return a[0][0];
	else if(n==2) return (a[0][0]*a[1][1] - a[0][1]*a[1][0]);
	else 
	{
		for(int i=0;i<n;i++)
		{
			int subi=0;
			for(int k=1;k<n;k++)
			{
				int subj=0;
				for(int l=0;l<n;l++)
				{
					if(l!=i)
					{
						subm[subi][subj]=a[k][l];
						subj++;
					}
				}
				subi++;
			}
			d=d+sign*a[0][i]*det(n-1,subm[][size],0);
			sign=-sign;
		}
		return d;
	}
}

int main()
{
	int a[size][size],n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf(" Enter elements of row no %d : ");
			scanf("%d", &a[i][j]);
		}	
	}
	printf("Determinant of matrix is %d\n",det(n,a,0));
	return 0;
}
