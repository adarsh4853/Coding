#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(),(v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

int binarySearch(vector<int> x, int l, int r, int k)
{
    int mid = l - ((l - r) / 2);
    //shit
    while (l <= r)
    {
        mid = l - ((l - r) / 2);
        if(r-1 == 1) return mid;
        if (x[mid] == k) return mid;
        else if (x[mid] > k) r=mid-1;
        else l=mid+1;
    }
    return mid-1;
}

void runCase(){

   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   sort(all(v));
   int k;
   cin>>k;
   cout<<binarySearch(v,0,n-1,k);

}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tests = 1;
//    cin >> tests;

   for(int i = 1;i <= tests; i++){
      // cout << "#Case " << i << ": \n";
      runCase();
   }

   return 0;
}