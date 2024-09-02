#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n,m,k;
    cin>>n>>m>>k;
    int w;
    cin>>w;
    vector<int> h(w);
    for(int i=0;i<w;i++) cin>>h[i];
    sort(h.begin(),h.end(),greater<int>());
    vector<vector<int>> v(n,vector<int>(m));
    while(true)
    {
        
    }
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