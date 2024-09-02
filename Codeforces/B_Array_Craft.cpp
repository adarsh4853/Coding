#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> ans(n);
    --x;--y;
    for(int i=y;i<x+1;++i)
    {
        ans[i]=1;
    }
    int temp=-1;
    for(int i=y-1;i>=0;--i)
    {
        ans[i]=temp;
        temp=-temp;
    }
    temp=-1;
    for(int i=x+1;i<n;++i)
    {
        ans[i]=temp;
        temp=-temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<' ';
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