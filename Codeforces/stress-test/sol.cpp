#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int a,b;
    cin>>a>>b;
    if(a%2==0 && b%2==0)
    {
        cout<<"YES"<<'\n';
        return;
    }
    vector<int> v;
    for(int i=0;i<a;i++)
    {
        v.push_back(1);
    }
    for(int i=0;i<b;i++)
    {
        v.push_back(2);
    }
    int sum=0,ans=a*1+b*2;
    for(auto &e:v)
    {
        sum+=e;
        if(2*sum==ans) {cout<<"YES"<<'\n';return;}
    }
    cout<<"NO"<<'\n';
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