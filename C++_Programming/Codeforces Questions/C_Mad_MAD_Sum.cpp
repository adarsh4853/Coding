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
    vector<int> temp(n);
    set<int> ss;
    int mad=0,sum=0;
    for(auto num:v) sum+=num;
    while(v[n-1]!=0)
    {
        mad=0;
        for(int i=0;i<n;i++)
        {
            if(ss.find(v[i])!=ss.end() && v[i]>mad) mad=v[i];
            temp[i]=mad;
            ss.insert(v[i]);
            sum+=temp[i];
            v[i]=temp[i];
        }
        ss.clear();
    }
    cout<<sum<<'\n';
    
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