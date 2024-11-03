#include <bits/stdc++.h>
using namespace std;
#define int long long

// const int inf = (int)1e18;
// const int mod = 1e9 + 7;

void calculateFactors(int n,vector<int> &factors)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            factors.push_back(i);
}

void runCase(int &testcase)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> temp;
    int num = n;
    calculateFactors(n,temp);
    // reverse(temp.begin(),temp.end());
    int ans = n;
    for (int i = 0; i < temp.size(); i++)
    {
        map<string, int> mpp;
        int j = 0, l = 0;
        bool flag = 1;
        while (j < n)
        {
            int cnt = 0;
            string str;
            while (j < n && cnt < temp[i])
            {
                str.push_back(s[j]);
                cnt++;
                j++;
            }
            // cout<<str<<' ';
            if (mpp.find(str) == mpp.end() && mpp.size() == 1)
            {
                pair<string, int> z = *mpp.begin();
                int diff = 0;
                int x = 0, y = 0;
                while (x < str.size())
                {
                    if (z.first[x] != str[y])
                        diff++;
                    if (diff > 1)
                    {
                        flag = 0;
                        break;
                    }
                    x++;
                    y++;
                }
            }
            if (flag == 0)
                break;
            mpp[str]++;
            if (mpp.size() == 3)
            {
                flag = 0;
                break;
            }
            int d = 0;
            for (auto &x : mpp)
            {
                if (x.second == 1)
                    d++;
            }
            if (d == 0 && mpp.size() == 2)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout<<temp[i]<<'\n';
            return;
        }
    }
    // cout << ans << '\n';
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