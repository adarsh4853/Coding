#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= 8; j++)
        {
            if (j == (s[1] - '0'))
            {
                //cout<<"hello"<<endl;
                continue;
            }
            cout << s[0];
            cout << j << endl;
        }
        for (char j = 'a'; j <= 'h'; j++)
        {
            if (j == s[0])
                continue;
            cout << j;
            cout << s[1] << endl;
        }
    }
    return 0;
}