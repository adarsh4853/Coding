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
    if(a%2!=0)
    {
        cout<<"NO"<<'\n';
        return;
    }
    b=b%2;
    if(a>=2*b)
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
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