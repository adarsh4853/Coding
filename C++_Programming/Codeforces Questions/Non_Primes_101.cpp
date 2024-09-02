#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

vector<bool> isprime(201,true);

void primeSieve(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=n;j+=i) isprime[j]=false;
        }
    }
}

void runCase()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++) mpp[v[i]]=i;
    for(int i=2;i<201;i++)
    {
        if(isprime[i]) continue;
        for(int j=0;j<n;j++)
        {
            if(mpp.find(i-v[j])!=mpp.end() && mpp[i-v[j]]!=j)
            {
                // cout<<v[mpp[v[j]]]<<' '<<j<<'\n';
                cout<<mpp[i-v[j]]+1<<' '<<j+1<<'\n';
                return;
            }
            // mpp[v[j]]=j;
        }
    }
    cout<<-1<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    primeSieve(200);
    for (int i = 1; i <= tests; i++)
        runCase();
    return 0;
}