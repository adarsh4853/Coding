#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

bool dp(int n,int curr=1)
{
    if(n==1) return true;
    if(n<=0) return false;
    return dp(n/curr,curr*10+1)+dp(n/curr,curr*10);
}

void runCase()
{
   int n;
   cin>>n;
   int ans=dp(n);
   if(ans) cout<<"YES\n";
   else cout<<"NO\n";
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