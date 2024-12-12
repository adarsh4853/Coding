#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int tests;
    cin >> tests;
    while (tests--) {
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        partial_sum(a.begin() + 1, a.end(), a.begin() + 1);
        // for (int i = 1; i <= n; ++i) cout << a[i] << ' ';
        // cout<<'\n';
        vector<int> dp(n + 2);
        for (int i = n - 1; i >= 0; --i) {
            int q = upper_bound(a.begin(), a.end(), a[i] + x) - a.begin();
            dp[i] = dp[q] + q - i - 1;
        }
        cout << accumulate(dp.begin(), dp.end(), 0ll) << '\n';
        vector<int> dp2(n + 2);
        for (int i = 0; i < n; ++i) {
            if(a[i]>x)
            {
                dp2[i]=0;
                continue;
            }
            int q = upper_bound(a.begin(), a.begin() + i, x - a[i]) - a.begin();
            dp2[i] = dp2[q] + q;
        }
        cout << accumulate(dp2.begin(), dp2.end(), 0ll) << '\n';
    }
}