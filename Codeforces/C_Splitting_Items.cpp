#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int a=0,b=0;
    bool flag=false;
    for(int i=n-2;i>=0;i--)
    {
        if(flag) 
        {
            flag=!flag;
            continue;
        }
        flag=!flag;
        if(k>=v[i+1]-v[i])
        {
            k-=(v[i+1]-v[i]);
            v[i]=v[i+1];
        }
        else
        {
            v[i]+=k;
            k=0;
            break;
        }
    }
    flag=true;
    for(int i=n-1;i>=0;i--)
    {
        // cout<<v[i]<<' ';
        if(flag) a+=v[i];
        else b+=v[i];
        flag=!flag;
    }
    cout<<a-b<<'\n';
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