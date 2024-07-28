#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
   int flow, coins;
   cin >> flow >> coins;
   vector<int> v(flow);
   for (int i = 0; i < flow; i++)
      cin >> v[i];
   sort(all(v));
   int i = 0, j = -1, currcost = 0, maxcost = 0;
   while (j+1 < flow)
   {
         ++j;
         currcost += v[j];
      // cout << "currcost = " << currcost << '\n';
      while(v[j]-v[i]>1)
      {
         currcost -= v[i];
         ++i;
      }
      while (currcost > coins)
      {
         // cout<<"v[i] = "<<v[i]<<'\n';
         currcost -= v[i];
         ++i;
         // cout << "currcost loop = " << currcost << '\n';
      }
      if (currcost == coins)
      {
         cout << coins << '\n';
         return;
      }
      else if (currcost < coins && v[j] - v[i] <= 1)
      {
         maxcost = max(maxcost, currcost);
      }
      // cout << "maxcost = " << maxcost << '\n';
      if (v[j] - v[i] > 1)
      {
         while (v[j] - v[i] > 1)
         {
            currcost -= v[i];
            ++i;
         }
      }
   }
   while(i<flow)
   {
      currcost-=v[i];
      i++;
      if(v[j]-v[i]<=1) maxcost=max(maxcost,currcost);
   }
   cout << maxcost << '\n';
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