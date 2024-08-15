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
    multiset<int> temp;
    int currmax=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=currmax) currmax=v[i];
        else 
        {
            temp.insert(currmax-v[i]);
        }
    }
    int s=temp.size()+1;
    int neg=0,ans=0;
    for(auto &it:temp)
    {
        cout<<it<<' ';
        ans+=(it-neg)*s;
        cout<<"neg = "<<neg<<'\n';
        neg=it;
        s--;
    }
    // cout<<'\n';        
    cout<<ans<<'\n';
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