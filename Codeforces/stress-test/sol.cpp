#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase(int &testcase)
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i]; 
    vector<int> x(n);
    x[0]=v[0];
    for(int i=1;i<n;i++)
    {
        x[i]=v[i]^x[i-1];
    }
    if(x[n-1]==0)
    {
        cout<<"YES"<<'\n';
        return;
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(((x[i]^x[j])==(x[j]^x[n-1])) && ((x[i]^x[j])==x[i]))
            {
                cout<<"YES"<<'\n';
                return;
            }
        }
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
    {
        // cout << "Case #" << i << ": \n";
        runCase(i);
    }
    return 0;
}