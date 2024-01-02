#include<stdio.h>

int main()
{
    int N;
    printf("Enter number of intgers: ");
    scanf("%d",&N);

    int a[N],b[N],c[N],o=0,p=0;
    for(int i=0;i<N;i++)
    {
        printf("Enter integer: ");
        scanf("%d",&a[i]);
    }

    for(int j=0;j<N;j++)
    {
        if(a[j]%2==0)
        {
            b[o]=a[j];
            o++;
        }
        else if (a[j]%2!=0)
        {
            c[p]=a[j];
            p++;
        }
        
    }
    printf("Even: ");
    for(int k=0;k<o;k++)
    {
        printf("%d  ",b[k]);
    }
    printf("Odd: ");
    for(int k=0;k<p;k++)
    {
        printf("%d  ",c[k]);
    }

   return 0; 
}