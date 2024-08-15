#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin>>n;
    vector<int> v(n);
    set<int> ss;
    for(int i=0;i<n;i++) cin>>v[i];
    ss.insert(v[0]);
    for(int i=1;i<n;i++)
    {
        if(ss.find(v[i]-1)==ss.end() && ss.find(v[i]+1)==ss.end())
        {
            cout<<"NO"<<'\n';
            return;
        }
        ss.insert(v[i]);
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
        runCase();
    return 0;
}