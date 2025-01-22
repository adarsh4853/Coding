#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase(int &testcase)
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int> mpp;
    for(int i=0;i<n;i++) mpp[v[i]]++;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(mpp.find(v[i])!=mpp.end())
        {
            mpp[v[i]]--;
			if(mpp[v[i]]==0) mpp.erase(v[i]);
			if(mpp.find(k-v[i])!=mpp.end()) 
			{
				mpp[k-v[i]]--;
				if(mpp[k-v[i]]==0) mpp.erase(k-v[i]);
				// cout<<v[i]<<' '<<k-v[i]<<'\n';
				ans++;
			}
        }
    }
    cout<<ans<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "Case #" << i << ": \n";
        runCase(i);
    }
    return 0;
}