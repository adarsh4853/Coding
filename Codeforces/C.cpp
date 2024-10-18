#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n,m,y;
    cin>>n>>m>>y;
    vector<int> a(n),b(m-1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m-1;i++) cin>>b[i];
    sort(a.begin(),a.end());
    int curr=0;
    for(int i=0;i<m-1;i++)
    {
        auto it=upper_bound(a.begin(),a.end(),b[i]);
        if(it==a.begin()) continue;
        it--;
        int num=it-a.begin()+1;
        curr+=num;
    }
    if(curr+n<y) cout<<-1<<'\n';
    else 
    {
        int num=y-curr;
        if(num<=0) cout<<0<<'\n';
        int temp=0;
        for(int i=0;i<n;i++)
        {
            temp++;
            if(temp==num) {cout<<a[i]<<'\n';return;}
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