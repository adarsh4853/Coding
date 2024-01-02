#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int len, flag = 0;
        ;
        cin >> len;
        string s1;
        cin >> s1;
        for (int j = 0; j < (len - 1); j++)
        {
            if (s1[j] != s1[j + 1])
            {
                s1.erase(j, 2);
                len = len - 2;
                j = -1;
            }
        }
        cout << len << endl;
    }
    return 0;
}