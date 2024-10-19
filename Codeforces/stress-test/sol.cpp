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
    vector<int> temp(v);
    sort(v.begin(),v.end());
    int i=0,j=0;
    while(i<n && j<n)
    {
        while(i<n && temp[i]%2==0) i++;
        while(j<n && v[j]%2==0) j++;
        if(i==n || j==n) break;
        if(v[j]!=temp[i]) {cout<<"NO"<<'\n';return;}
        else {i++;j++;}
    }
    i=0,j=0;
    while(i<n && j<n)
    {
        while(i<n && temp[i]%2!=0) i++;
        while(j<n && v[j]%2!=0) j++;
        if(i==n || j==n) break;
        // cout<<v[j]<<' '<<temp[i]<<'\n';
        if(v[j]!=temp[i]) {cout<<"NO"<<'\n';return;}
        else {i++;j++;}
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