#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        printf("*");
        if (i == 0)
            printf("\n");
        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf(" ");
        }
        if (i >= 1)
            printf("*\n");
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j <= n - 1 - i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int k = 2; k < 2 * i - 1; k++)
        {
            printf(" ");
        }
        if (i >= 2)
            printf("*\n");
    }
    return 0;
}