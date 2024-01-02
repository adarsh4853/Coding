#include <stdio.h>

int main()
{
    int t;
    int n, k, flag = 0, flag2 = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        flag = 0, flag2 = 0;
        scanf("%d", &n);
        scanf("%d", &k);
        long int a[n], b[n], temp;
        for (int j = 0; j < n; j++)
        {
            scanf("%ld", &a[j]);
            b[j] = a[j];
        }
        for (int j = 0; j < n; j++)
        {
            for (int l = j; l < (j + k) && l < n; l++)
            {
                for (int x = j; x <= ((j + l) / 2); x++)
                {
                    temp = b[l - x];
                    b[l - x] = b[x];
                    b[x] = b[temp];
                    for (int ci = 0; ci < n; ci++)
                    {
                        for (int di = 0; di < n; di++)
                        {
                            if (b[ci] > b[di])
                            {
                                break;
                            }
                            else
                            {
                                flag2 = 1;
                                j = ci - 1;
                            }
                        }
                        if (flag2 == 1)
                        {
                            printf("Yes\n");
                            break;
                        }
                    }
                    if (flag2 == 1)
                    {
                        break;
                    }
                }
                if (flag2 == 1)
                {
                    break;
                }
            }
            if (flag2 == 1)
            {
                break;
            }
        }
        if (flag2 == 1)
        {
            continue;
        }
        for (int ci = 0; ci < n; ci++)
        {
            for (int di = 0; di < n; di++)
            {
                if (b[ci] > b[di])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            printf("Yes\n");
        else
            printf("NO\n");
    }
    return 0;
}