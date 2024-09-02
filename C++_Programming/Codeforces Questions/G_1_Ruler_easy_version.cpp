#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    pair<int,int> l={1,1},r={999,999},mid,ans={-1,-1};
    int inp=0;
    while (r.first>=l.first && r.second>=l.second)
    {
        mid={(l.first+r.first)/2,(l.second+r.second)/2};
        cout<<"? "<<mid.first<<' '<<mid.second<<'\n';
        cin>>inp;
        if((mid.first+1)*(mid.second+1)==inp) 
        {
            ans={mid.first,mid.second};
            r={mid.first-1,mid.second-1};
        }
        else l={mid.first+1,mid.second+1};
    }
    cout<<"! "<<ans.first<<'\n';
}

int32_t main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }

    return 0;
}