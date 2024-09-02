#include <bits/stdc++.h>
using namespace std;
#define int long long

// const int inf = (int)1e18;
// const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[s[i]]++;
    }
    string temp;
    while (!mpp.empty())
    {
        for (auto it = mpp.begin(); it != mpp.end();)
        {
            temp.push_back(it->first);
            it->second--;
            if (it->second == 0)
            {
                it = mpp.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }
    cout<<temp<<'\n';
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