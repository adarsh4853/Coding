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
using namespace std;

void run_case()
{

    ll m, n, a, p1, p2;
    cin >> m >> n >> a;
    p1 = n / a;
    p2 = m / a;
    if ((float)n / a > n / a)
    {
        p1 = n / a + 1;
    }
    if ((float)m / a > m / a)
    {
        p2 = m / a + 1;
    }
    cout << (p2 + (p1 - 1) * p2);
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