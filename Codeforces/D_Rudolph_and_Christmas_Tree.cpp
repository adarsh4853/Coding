#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n,b,h;
    cin>>n>>b>>h;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long double ans=0;
    long double area=(0.5L)*b*h;
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]<v[i]+h)
        {
            int diff=v[i+1]-v[i];
            ans+=((long double)(diff*b)/(2.0L*h)) * (2.0L*h - diff);
            // cout<<"check "<<ans<<'\n';
        }
        else ans+=area;
    }
    ans+=area;
    cout<<fixed<<setprecision(10)<<ans<<'\n';
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