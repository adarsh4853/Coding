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
    string s;
    cin>>n>>s;
    set<char> ss;
    for(int i=0;i<n;i++) ss.insert(s[i]);
    vector<char> v;
    for(auto it:ss) v.push_back(it);
    
    ss.clear();
    map<char,char> mpp;
    int len=v.size();
    for(int i=0;i<len;i++) mpp[v[i]]=v[len-i-1];
    for(int i=0;i<n;i++)
    {
        s[i]=mpp[s[i]];
    }
    cout<<s<<'\n';
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