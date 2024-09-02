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

    ll msg, ch, con, off, sum = 0, m1, m2;
    cin >> msg >> ch >> con >> off;
    ll a[msg];
    for (int i = 0; i < msg; i++)
    {
        cin >> a[i];
    }
    if (a[0] * con > off)
        ch -= off;
    else
        ch -= a[0] * con;
    if (ch<=0)
    {
        cout << "NO" << '\n';
        return;
    }
    // cout << sum << endl;
    for (int i = 1; i < msg; i++)
    {
        ll cost = ((a[i] * con) - (a[i - 1] * con));
        if (cost > off)
        {
            ch -= off;
        }
        else
        {
            ch -= cost;
        }
        if (ch<=0)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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