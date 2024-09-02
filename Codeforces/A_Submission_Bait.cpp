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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(all(v));
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
        {
            if(cnt&1)
            {
                cout<<"YES"<<'\n';
                return;
            }
            else cnt=0;
        }
        cnt++;
    }
    if(cnt&1) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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