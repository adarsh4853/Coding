#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase(int &testcase)
{
    int n,k;
    cin>>n>>k;
    if(n==1)
    {
        if(k==1) cout<<1<<'\n'<<1<<'\n';
        else cout<<-1<<'\n';
        return;
    }
    if(k==n || k==1)
    {
        cout<<-1<<'\n';
        return;
    }
    if((k-1)%2==0)
    {
        cout<<5<<'\n';
        cout<<1<<' ';
        cout<<k-1<<' ';
        cout<<k<<' ';
        cout<<k+1<<' ';
        cout<<k+2<<'\n';
    }
    else
    {
        cout<<3<<'\n';
        cout<<1<<' '<<k<<' '<<k+1<<'\n';
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "Case #" << i << ": \n";
        runCase(i);
    }
    return 0;
}