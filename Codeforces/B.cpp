#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase(int &testcase)
{
    int n;
    cin>>n;
    int temp=4;
    int ans=2;
    if(n==1)
    {
        cout<<1<<'\n';
        return;
    }
    if(n==2)
    {
        cout<<2<<'\n';
        return;
    }
    while(temp<n)
    {
        temp=temp*2+2;
        ans++;
    }
    cout<<ans<<'\n';
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