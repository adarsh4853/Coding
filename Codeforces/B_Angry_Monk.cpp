#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
   int n,k;
   cin>>n>>k;
   vector<int> v(k);
   for(int i=0;i<k;i++) cin>>v[i];
   sort(all(v));
   int cnt=0;
   for(int i=0;i<k-1;i++)
   {
    if(v[i]==1) cnt++;
    else cnt+=2*v[i]-1;
   }
   cout<<cnt<<'\n';
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