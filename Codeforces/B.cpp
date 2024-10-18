#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n,q;
    cin>>n>>q;
    vector<multiset<int>> v(n+1);
    while(q--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int i,x;
            cin>>i>>x;
            v[i].insert(x);
        }
        else
        {
            int i;
            cin>>i;
            if(v[i].size()==0) cout<<-1<<' ';
            else
            {
                auto it=v[i].end();
                --it;
                cout<<*it<<' ';
                v[i].erase(it);
            }
        }
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
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }
    return 0;
}