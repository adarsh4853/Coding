#include<stdio.h>
int main()
{
    int n,A[25],B[25],C[25],j=0,k=0;
    printf("Enter integer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
        {
            C[j]=A[i]; 
            j++;
        }
        else if(A[i]>0)
        {
            B[k]=A[i];
            k++;
        }
    }
    for(int a=0;a<k;a++)
    {
        printf("positive:%d\n",B[a]);
    }
    for(int b=0;b<j;b++)
    {
        printf("Negative:%d\n",C[b]);
    }
    return 0;
}