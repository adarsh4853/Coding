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

    int n;
    vector<int> v(3, 0);
    cin >> v[0] >> v[1] >> v[2];
    // ll mid=1;
    if (v[0] == v[1] && v[0] != v[2])
    {
        cout << v[2]<<endl;
    }
    else if (v[2] == v[1] && v[0] != v[2])
    {
        cout << v[0]<<endl;
    }
    else
    {
        cout << v[1]<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}
