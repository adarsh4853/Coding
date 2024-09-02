#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{

    int a, b, m, cnt = 0;
    cin >> a >> b >> m;
    int temp=a;
    if(a>b) swap(a,b);
    while ((temp - a) < (m + 1))
    {
        cnt++;
        temp = temp + a;
    }
    temp = b;
    if ((b-a) < (m + 1))
    {
        while ((temp - b) < m + 1)
        {
            // cout<<temp<<" "<<cnt<<" ";
            cnt++;
            temp = temp + b;
        }
    }
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