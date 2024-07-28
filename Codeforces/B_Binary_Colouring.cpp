#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int x;
    cin >> x;
    vector<int> ans;
    while(x>0)
    {
        if(x%2==0) ans.push_back(0);
        else if((x/2)%2==0)
        {
            ans.push_back(1);
        }
        else
        {
            ans.push_back(-1);
            x+=1;
        }
        x=x>>1;
    }
    cout<<ans.size()<<'\n';
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    cout<<'\n';
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