#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
   string s;
   int flag=0;
   cin>>s;
   for(int i=1;i<s.size();i++)
   {
    if(s[i-1]!=s[i])
    {
        swap(s[i-1],s[i]);
        flag=1;
        break;
    }
   }
    if(flag==1) cout<<"YES"<<'\n'<<s<<'\n';
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