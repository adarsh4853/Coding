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

    int w;
    cin >> w;
    if (w == 2)
    {
        cout << "NO";
        return;
    }

    if (w % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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