#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    vector<int> v(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(v.begin(),v.end());
    if(v[2]>v[1]+v[0]+1) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
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