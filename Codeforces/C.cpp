#include <bits/stdc++.h>
using namespace std;
// #define int long long

// const int inf = (int)1e18;
// const int mod = 1e9 + 7;

bool mycmp(pair<int, int> x, pair<int, int> y)
{
    if (x.first == y.first)
        return x.second < y.second;
    else
        return x.first < y.first;
}

void runCase()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    set<pair<int, int>> ss;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
        // ss.insert({x, y});
    }
    sort(v.begin(),v.end(),mycmp);
    ss.insert(v[0]);
    for(int i=1;i<n;i++)
    {
        if((v[i].first>=v[i-1].first && v[i].first<=v[i-1].second) || (v[i-1].second>=v[i].first && v[i-1].second<=v[i].second))
        {
            ss.erase(ss.find({v[i-1]}));
            v[i]={min(v[i].first,v[i-1].first),max(v[i].second,v[i-1].second)};
            ss.insert(v[i]);
        }
        else ss.insert(v[i]);
    }
    cout<<ss.size()<<'\n';
    for(auto &x:ss)
    {
        cout<<x.first<<' '<<x.second<<'\n';
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
        // cout << "#Case " << i << ": \n";
        runCase();
    }
    return 0;
}