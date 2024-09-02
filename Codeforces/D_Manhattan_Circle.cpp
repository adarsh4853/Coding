#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
   int x,y;
   cin>>x>>y;
   vector<vector<char>> v(x,vector<char>(y));
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            cin>>v[i][j];
    bool flag=false;
    pair<int,int> up,down;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(v[i][j]=='#')
            {
                up={i,j};
                flag=true;
                break;
            }
        }
        if(flag==true) break;
    }
    pair<int,int> fast=up,slow=up;
    while(true)
    {
        if(fast.first+2<x && v[fast.first+2][up.second]=='#')
        {
            fast.first+=2;
            slow.first+=1;
        }
        else 
        {
            cout<<slow.first+1<<' '<<slow.second+1<<'\n';
            break;
        }
    }
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