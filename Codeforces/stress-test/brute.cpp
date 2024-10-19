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
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> a,b;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0) a.push_back(v[i]);
        else b.push_back(v[i]);
    }
    if(is_sorted(a.begin(),a.end()) && is_sorted(b.begin(),b.end())) cout<<"YES\n";
    else cout<<"NO\n";
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