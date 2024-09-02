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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int maxodd = -1;
    int maxeven=-1;
    sort(all(v));
    for (int i = 0; i < n; i++)
        if (v[i] % 2 != 0)
            maxodd = max(maxodd, v[i]);
        else maxeven=max(maxeven,v[i]);
    if(maxodd==-1)
    {
        cout<<0<<'\n';
        return;
    }
    // cout<<"maxodd "<<maxodd<<'\n';
    int i=0,cnt=0;
    while(i<n)
    {
    // cout<<"maxodd "<<maxodd<<'\n';
        if(v[i]%2!=0) i++;
        else{
            if(v[i]<maxodd)
            {
                cnt++;
                // v[i]+=maxodd;
                // cout<<v[i]<<'\n';
                maxodd=v[i]+maxodd;
                i++;
            }
            else 
            {
                maxodd=maxodd+maxeven;
                cnt++;
            }
        }
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