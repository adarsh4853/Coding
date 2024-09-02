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
   cin>>n;
   string s;
   cin>>s;
   map<char,int> mpp;
   for(int i=0;i<s.size();i++) mpp[s[i]]++;
   int ans=0;
   ans+=min(mpp['A'],n);
   ans+=min(mpp['B'],n);
   ans+=min(mpp['C'],n);
   ans+=min(mpp['D'],n);
   cout<<ans<<'\n';
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