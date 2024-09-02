#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

int binarySearch(vector<int> &a,int k,int d)
{
    int l=0,r=k-1,mid=0;
    while(r-l>1)
    {
        mid=l+(r-l)/2;
        if(a[mid]==d) return mid;
        else if(a[mid]>d) r=mid-1;
        else l=mid;
    }
    return l;
}

void runCase()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k), b(k);
    for (int i = 0; i < k; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
        cin >> b[i];

    // vector<int> v = {a[0] / b[0]};
    // for (int i = 1; i < k; i++) v.push_back((a[i] - a[i - 1]) / (b[i] - b[i - 1]));

    for(int i = 0; i < q; i++)
    {
        int d;
        cin>>d;
        int ind=binarySearch(a,k,d);
        cout<<(a[ind+1]-a[ind])/(b[ind+1]-b[ind+1])<<" ";
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