#include <stdio.h>

int main()
{
    int t, n, count = 0, ind = 0, k = 1, clone = 0,flag=0;
    char temp;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d", &n);
        char a[n], index[n];
        for (int x = 0; x < n; x++)
        {
            index[x] = -1;
        }
        scanf("%s", a);
        for (int m = 0;; m++)
        {
            flag=0;
            for (int j = 0; j < n - 1; j++)
            {
                clone = 0;
                if ((a[j] == 'A') && (a[j + 1] == 'B'))
                {
                    index[k++] = j;
                    for (int z = 0; z < (k - 1); z++)
                    {
                        if (index[z] == j)
                        {
                            clone = 1;
                            break;
                        }
                    }
                    if (clone == 1)
                        continue;
                    temp = a[j];
                    a[j] = a[j + 1];    
                    a[j + 1] = temp;
                    count++;
                    flag=1;
                }
            }
            if(flag==0) break;
        }
        printf("%d\n", count);
    }
}
