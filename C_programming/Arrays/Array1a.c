#include <stdio.h>

int main()
{
    int n, a[25], b[50], c[50], sum = 0;
    printf("Enter integer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
       for (int i = 0; i < n; i++)
    {
        /*if (a[i] < 0)
        {
            c[i + 1] = a[i];
            a[i] = -a[i];
            printf("negative : %d \n", c[i + 1]);
        }
        else if (a[i] >= 0)
        {
            b[i] = a[i];
            printf("positive : %d \n", b[i]);
        }

        printf("\n");
        //    printf("%d\n", a[i]);*/
        sum = sum + a[i];
    }
    // for (int i = 0; i < n; i++){
    //         printf("negative : %d \n", c[i+1]);
    // }
    // for (int i = 0; i < n; i++){
    //         printf("positive : %d \n", b[i]);
    // }

    printf("Sum is %d", sum);
    return 0;
}
