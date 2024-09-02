#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int mx=*max_element(v.begin(),v.end());
    while(m--)
    {
        char op;
        int a,b;
        cin>>op>>a>>b;
        if(mx>=a && mx<=b) 
        {
            if(op=='+') mx++;
            else mx--;
        }
        cout<<mx<<' ';

    }
    cout<<'\n';
    
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