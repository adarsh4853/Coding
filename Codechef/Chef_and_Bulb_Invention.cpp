#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
   int n,target,k;
   cin>>n>>target>>k;
   int start=target%k;
   int cnt=0,i=start;
   cnt+=(start)*(n/(k-1));
   // cout<<"Starting cnt = "<<cnt<<'\n';
   while(i<n)
   {
      cnt++;
      if(i==target) break;
      i+=k;
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