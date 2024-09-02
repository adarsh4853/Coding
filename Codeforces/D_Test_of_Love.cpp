#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int ind = -1;
    bool flag = 0;
    while (ind < n)
    {
        flag=0;
        if(ind>=0 && s[ind]=='C')
        {
            cout<<"NO"<<'\n';
            return;
        }
        if (ind == -1 || s[ind] == 'L')
        {
            for (int i = m; i >= 1; i--)
            {
                if (ind + i < n && s[ind + i] == 'L')
                {
                    ind = ind + i;
                    flag = 1;
                    break;
                }
                else if(ind+i>=n)
                {
                    cout<<"YES"<<'\n';
                    return;
                }
            }
        }
        if (flag == 1)
            continue;
        if (ind == -1 || s[ind] == 'L')
        {
            for (int i = m; i >= 1; i--)
            {
                if (ind + i < n && s[ind + i] == 'W')
                {
                    ind = ind + i;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            continue;
        if(ind==-1||s[ind]=='W')
        {
            if(k<=0) 
            {
                cout<<"NO"<<'\n';
                return;
            }
            ind+=1;
            --k;
            flag=1;
        }
        if (flag == 1)
            continue;
        cout<<"NO"<<'\n';
        return;
    }
    cout<<"YES"<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }

    return 0;
}