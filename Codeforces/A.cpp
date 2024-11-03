#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase(int &testcase)
{
    int n;
    cin>>n;
    vector<int> v(2*n);
    int sum=0;
    for(int i=0;i<2*n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2!=0) cout<<1<<' ';
    else cout<<0<<' ';
    if(sum<=n)
    {
        cout<<sum<<'\n';
    }
    else
    {
        cout<<2*n%sum<<'\n';
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