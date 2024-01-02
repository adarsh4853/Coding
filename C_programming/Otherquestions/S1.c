#include<stdio.h>
int main()
{
    int n;
    printf("Enter starting number of pattern: ");
    scanf("%d",&n);
    for (int i = n; i>0; i--)
    {
        for (int j = n-i; j>0; j--)
            {
            printf(" ");
            }
        for(int k=1;k<=2*i-1;k++)
           {
            //if(k%2==0) continue;
            printf("%d",i);
           }
        printf("\n");
    }
    for (int i = 1; i<=n; i++)
    {
        for (int j = i; j<n; j++)
            {
            printf(" ");
            }
        for(int k=0;k<2*i-1;k++)
           {
            //if(k%2==0) continue;
            printf("%d",i);
           }
        printf("\n");
    }
    
    return 0;
}
