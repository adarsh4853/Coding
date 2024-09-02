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
using namespace std;

void run_case(int &tttt)
{
    // cout<<"Case"<<" : "<<tttt<<"\n";

    int n, sum = 0;
    cin >> n;
    if (n - 3 % 3 != 0 && (n>6))
    {
        cout << "YES" << endl;
        cout << 1 << " " << 2 << " " << n-3 << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 0; i < tests; i++)
        run_case(i);
}