#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int> ind(m);
    for(int i=0;i<m;i++) cin>>ind[i];
    string c;
    cin>>c;
    sort(ind.begin(),ind.end());
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++)
    {
        while(s[i]==s[i+1])
        {
            s.insert(i,1,s.back());
            s.erase(s.back());
        }
    }
    for(int i=0;i<m;i++)
    {
        s[ind[i]]=c[i];
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
        runCase();
    return 0;
}