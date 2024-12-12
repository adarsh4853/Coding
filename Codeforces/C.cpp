#include <bits/stdc++.h>
using namespace std;
#define int long long

// const int inf = (int)1e18;
// const int mod = 1e9 + 7;

void runCase(int &testcase)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int temp = n;
    set<int> s1, s2;
    vector<pair<int, int>> ans;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            c1++;
            s1.insert(i);
            if (c2 != 0)
            {
                ans.push_back({*s2.begin()+1, i+1});
                v[i] = 2;
                v[*s2.begin()] = 1;
                s1.erase(i);
                s1.insert(*s2.begin());
                s2.erase(*s2.begin());
                s2.insert(i);
            }
        }
        else if (v[i] == 2)
        {
            c2++;
            s2.insert(i);
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 0)
        {
            if (c1 == 0 && c2 == 0)
            {
                continue;
            }
            else if (c2 == 0)
            {
                if(*s1.begin()>i) continue;
                ans.push_back({*s1.begin() + 1, i + 1});
                // cout<<*s1.begin()+1<<' '<<i+1<<'\n';
                s1.erase(s1.begin());
                s1.insert(i);
            }
            else
            {
                if (c1 != 0)
                {
                    if(*s1.begin()>i) continue;
                    ans.push_back({*s1.begin() + 1, i + 1});
                    // cout<<*s1.begin()+1<<' '<<i+1<<'\n';
                    s1.erase(s1.begin());
                    s1.insert(i);
                }
                if(*s2.begin()>i) continue;
                ans.push_back({*s2.begin() + 1, i + 1});
                // cout<<*s2.begin()+1<<' '<<i+1<<'\n';
                s1.erase(i);
                s1.insert(*s2.begin());
                s2.erase(s2.begin());
                s2.insert(i);
            }
        }
        else if (v[i] == 1)
        {
            c1++;
            s1.insert(i);
            if (c2 != 0)
            {
                if(*s2.begin()>i) continue;
                ans.push_back({*s2.begin() + 1, i + 1});
                // cout<<*s2.begin()+1<<' '<<i+1<<'\n';
                s1.erase(i);
                s1.insert(*s2.begin());
                s2.erase(s2.begin());
                s2.insert(i);
            }
        }
        else
        {
            c2++;
            s2.insert(i);
        }
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << ' ' << ans[i].second << '\n';
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