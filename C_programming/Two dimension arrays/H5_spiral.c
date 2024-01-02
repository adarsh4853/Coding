/*#include<stdio.h>
#define size 10

void spiralprint(int a[][size],int m,int n);

int main()
{
	int m,n;
	printf("Enter m: ");
	scanf("%d",&m);
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[size][size];
	
	for(int i=0;i<m;i++)
	{
		printf("Enter elements of row no %d : ",i+1);
		for(int j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}	
	}
	printf("Input Matix:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");	
	}
	
	spiralprint(a,m,n);
	return 0;
}

void spiralprint(int a[][size],int m,int n)
{
	int j=-1,k=-1;
	for(int i=0;i<m;i++)
	{
		j++,k++;
		for(j=0;j<n-1;j++)
		{
			printf("%d ",a[k][j]);
		}
		for(k=0;k<m-1;k++)
		{
			printf("%d ",a[k][j]);
		} 
		for(;j>0;j--)
		{
			printf("%d ",a[k][j]);
		}
		for(;k>1;k--)
		{
			printf("%d ",a[k][j]);
		}	
	}	
}*/
#include <stdio.h>

void printSpiral(int matrix[][100], int m, int n) {
    int i, k = 0, l = 0;
    
    while (k < m && l < n) {
        // Print the first row from the remaining rows
        for (i = l; i < n; ++i) {
            printf("%d ", matrix[k][i]);
        }
        k++;
        
        // Print the last column from the remaining columns
        for (i = k; i < m; ++i) {
            printf("%d ", matrix[i][n - 1]);
        }
        n--;
        
        // Print the last row from the remaining rows
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                printf("%d ", matrix[m - 1][i]);
            }
            m--;
        }
        
        // Print the first column from the remaining columns
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                printf("%d ", matrix[i][l]);
            }
            l++;
        }
    }
}

int main() {
    int matrix[100][100];
    int m, n, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Matrix in spiral form: ");
    printSpiral(matrix, m, n);
    
    return 0;
}











