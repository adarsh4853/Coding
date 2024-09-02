#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
using namespace std;

void run_case()
{
    int s, n;
    cin >> s >> n;
    int sum1 = s;
    vector<pair<int, int>> v(n, {0, 0});
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b){ return a.first < b.first; });
    for (int i = 0; i < n; i++){
        if (sum1 - v[i].first <= 0){
            cout << "NO";
            return;
        }
        sum1 = sum1 + v[i].second;
    }
    cout << "YES";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0)
        run_case();
}