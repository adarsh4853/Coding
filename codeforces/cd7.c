#include <stdio.h>
#include <string.h>

int main()
{
    int t, n, len;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        len = n;
        char s[1000], temp, str[1000];
        int count0 = 0, count1 = 0, flag = 0;
        scanf("%s", str);
        strcpy(s, str);
        for (int j = 0; j < len && s[j + 1] != '\0'; j++)
        {
            count0 = 0, count1 = 0;
            strcpy(s, str);
            for (int x = 0; x < len; x++)
            {
                if (s[x] == '0')
                    count0++;
                else if (s[x] == '1')
                    count1++;
            }
            if (count0 > count1)
            {
                flag = 1;
                break;
            }
            else if (count0 == 0)
                break;
            count0 = 0, count1 = 0;
            for (int k = len; k >= j + 1; k--)
            {
                s[k + 1] = s[k];
            }
            if (s[j] == s[j + 1])
            {
                s[j + 1] = '1';
            }
            else if (s[j] != s[j + 1])
            {
                s[j + 1] = '0';
            }
            len++;
            for (int x = 0; x < len; x++)
            {
                if (s[x] == '0')
                    count0++;
                if (s[x] == '1')
                    count1++;
            }
            if (count0 > count1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
            continue;
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}