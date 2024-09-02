#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    string s;
    cin >> s;
    int cnt=1,temp=0;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i-1]=='1' && s[i]=='0') cnt++;
        if(s[i-1]=='0' && s[i]=='1')
        {
            temp++;
        }
    }
    if(temp!=0) cnt+=temp-1;
    cout<<cnt<<'\n';
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