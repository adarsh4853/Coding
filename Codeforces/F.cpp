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
    set<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.insert({x, y});
    }
    // sort(v.begin(),v.end(),mycmp);
    int cnt = 0, id = 0;
    vector<int> b;
    vector<pair<int, int>> ans;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (i == v.begin())
            continue;
        auto prev = i;
        prev--;
        auto curr = i;
        pair<int, int> p = *prev, c = *curr;
        if (c.first >= p.first && c.first <= p.second)
        {
            c.first = p.first;
            c.second = max(p.second, c.second);
            p=c;
        }
        else
        {
            b.push_back(id);
            cnt++;
        }
        id++;
    }
    for(int i=0;i<b.size();i++) cout<<b[i]<<' ';
    cout<<'\n';
    cout << cnt << '\n';
    int z = 0;
    id = 0;
    for (auto &x : v)
    {
        if(id==b.size()) break;
        if (b[id] == z)
        {
            cout << x.first << ' ' << x.second << '\n';
            id++;
        }
        z++;
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