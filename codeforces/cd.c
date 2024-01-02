#include <stdio.h>

int main()
{
    int t, n, temp = 0, bad = 0, bi = 0, max, count = 0, clone = 0, flag = 0, f = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        bi = 0;
        f = 0;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int j = 0; j < n; j++)
        {
            clone = a[j];
            flag = 0;
            for (int k = 0; k < n; k++)
            {
                if (a[k] == clone)
                {
                    flag++;
                }
            }
            if (flag > 1)
            {
                printf("NO\n");
                f = 1;
                break;
            }
        }
        if (f == 1)
            continue;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > n)
            {
                printf("NO\n");
                f = 1;
                break;
            }
        }
        if (f == 1)
            continue;
        for (int p = 0;; p++)
        {
            bad = 0;
            for (int j = 1; j < n - 1; j++)
            {
                if ((a[j - 1] < a[j]) && (a[j] > a[j + 1]))
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    bad = 1;
                }
            }
            if (bad == 0)
                break;
        }
        // max = a[n - 1];
        // for (int k = 0; k < n; k++)
        // {
        //     if (a[k] > max)
        //     {
        //         count = 1;
        //         break;
        //     }
        // }
        for (int q = 0; q < n; q++)
        {
            if ((q + 1) != a[q])
            {
                bi = 1;
                break;
            }
        }
        if ((bi == 1))
            printf("NO\n");
        else if (bi != 1)
            printf("YES\n");
    }
    return 0;
}
