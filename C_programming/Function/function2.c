#include<stdio.h>

int fact(int a)
{
    int prod=1;
    for (int i = a; i >= 1; i--)
    {
        prod *= i;
    }
    return prod;
}
void sum()
{
    int x=0,term;
    term=1;
    for (int i = 2; i < 7; i++)
    {
        x += term;
        term = fact(i)/i;
    }
    printf("Sum of series is %d",x);
    return ;
}
int main()
{
    sum();
    return 0;
}