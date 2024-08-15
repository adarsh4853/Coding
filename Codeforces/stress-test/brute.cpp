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

    int64_t n, k;
    cin >> n >> k;
    if (k > ((n / 2) * ((n + 1) / 2) * 2) || (k & 1)) {
        cout << "No\n";
        return;
    }
    int64_t sum = (n - 1) * 2;
    int64_t num = n;
    int64_t i = 3;
    vector<int64_t> res;
    while (sum <= k) {
        if (n - i <= 0) break;
        sum += (n - i) * 2;
        i += 2;
        res.push_back(num--);
        assert(res.size() <= n);
    }
    cout << "Yes\n";
    num = 1;
    while (res.size() < n) {
        res.push_back(num++);
        assert(res.size() <= n);
    }
    sum = 0;
    for (int64_t i = 0; i < n; i++) {
        sum += abs(res[i] - (i + 1));
    }
    i = n - 1;
    bool flag = false;
    while (sum != k) {
        assert(i >= 0 && i < res.size());
        if (flag || (i + 1 == res[i])) {
            flag = true;
            sum += 2;
        }
        assert(i - 1 >= 0 && i < res.size());
        swap(res[i], res[i - 1]);
        i--;
    }
    assert(sum == k);
    // for (auto &e : res) cout << e << " ";
    cout << "\n";
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests = 1;
    cin >> tests;
    for (int i = 1; i <= tests; i++) runCase(i);

    return 0;
}