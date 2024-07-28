#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int sum = 0,mx=0;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        sum+=v[i];
        mpp[v[i]]++;
        mx=max(v[i],mx);
    }
    if(sum%3==0) 
    {
        cout<<0<<'\n';
        return;
    }
    if((sum+1)%3==0) 
    {
        cout<<1<<'\n';
        return;
    }
    int rem=sum%3;
    for(int i=rem;i<=mx;i+=3)
    {
        if(mpp.find(i)!=mpp.end()) 
        {
            cout<<1<<'\n';
            return;
        }
    }
    cout<<2<<'\n';
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