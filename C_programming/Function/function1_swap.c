#include <stdio.h>

void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    return ;
}
int main()
{
    int a,b;
    printf("enter number: ");
    scanf("%d",&a);
    printf("enter number: ");
    scanf("%d",&b);
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
    
    return 0;
}