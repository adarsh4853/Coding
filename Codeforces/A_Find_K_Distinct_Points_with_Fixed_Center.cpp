#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int x,y,k;
    cin>>x>>y>>k;
    int sumx=x*k,sumy=y*k;
    for(int i=1;i<k;i++)
    {
        cout<<i<<' '<<i<<'\n';
    }
    int currsum=(k-1)*k/2;
    cout<<sumx-currsum<<' '<<sumy-currsum<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
        runCase();
    return 0;
}