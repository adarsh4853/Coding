#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

// https://codeforces.com/problemset/problem/1941/D

void runCase()
{
    int n,m,x,r;
    cin>>n>>m>>x;
    set<int> ss;
    ss.insert(x);
    char c;
    while(m--)
    {
        cin>>r>>c;
        if(c=='0')
        {
            vector<int> temp;
            set<int> s1;
            for(auto &it:ss)
            {
                temp.push_back(it);
                if(it+r==n) s1.insert(n);
                else s1.insert((it+r)%n);
                // s1.insert((it-r+n)%n);
            }
            ss=s1;
        }
        else if(c=='1')
        {
            vector<int> temp;
            set<int> s1;
            for(auto &it:ss)
            {
                temp.push_back(it);
                // s1.insert((it+r)%n);
                if(it-r==0) s1.insert(n);
                else s1.insert((it-r+n)%n);
            }
            ss=s1;
        }
        else
        {
            vector<int> temp;
            set<int> s1;
            for(auto &it:ss)
            {
                temp.push_back(it);
                // s1.insert((it+r)%n);
                if(it+r==n) s1.insert(n);
                else s1.insert((it+r)%n);
                // s1.insert((it-r+n)%n);
                if(it-r==0) s1.insert(n);
                else s1.insert((it-r+n)%n);
            }
            ss=s1;
        }
    }
    cout<<ss.size()<<'\n';
    for(auto &it:ss)
    {
        cout<<it<<' ';
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