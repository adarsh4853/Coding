#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, flag = 0, z = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        flag = 0;
        z = 0;
        for (int k = 0;; k++)
        {
            flag=0;
            for (int l = 0; l < m; l++)
            {
                if (x[l + k] != s[l])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << z << endl;
                break;
            }
            else if (k == 20)
            {
                cout << "-1" << endl;
                break;
            }
            else
            {
                x += x;
                z++;
            }
        }
    }
    return 0;
}