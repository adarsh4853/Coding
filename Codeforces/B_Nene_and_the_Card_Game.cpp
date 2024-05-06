#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void runCase()
{

    int n,cnt=0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++) if(v[i]==v[i-1]) cnt++;
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