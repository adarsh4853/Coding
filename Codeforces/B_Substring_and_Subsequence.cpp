#include <bits/stdc++.h>
using namespace std;
constexpr int64_t inf = (int64_t)1e+18;
constexpr int mod = 1000000007;

#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...)
#endif

// @author: ZhockDen

void runCase(int &testCase) {
    // cout << "#Case " << testCase << ": \n";

    string a,b;
    cin >> a>>b;
    int m = a.size(),n=b.size();
    int ans = 0,cnt=0;
    for(int k=0;k<n;k++)
    {
        int j=k,i=0;
        cnt=0;
        while(i<m && j<n)
        {
            if(a[i]==b[j]) 
            {
                i++;
                j++;
                cnt++;
            }
            else i++;
        }
        ans=max(ans,cnt);
    }
    cout<<(m+n-ans)<<'\n';
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests = 1;
    cin >> tests;
    for (int i = 1; i <= tests; i++) runCase(i);

    return 0;
}