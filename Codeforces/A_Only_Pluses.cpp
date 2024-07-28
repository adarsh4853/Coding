#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
   vector<int> v(3);
   cin>>v[0]>>v[1]>>v[2];
   for(int i=0;i<5;i++)
   {
    sort(all(v));
    v[0]++;
   }
   int ans=1;
   for(int i=0;i<3;i++) ans*=v[i];
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