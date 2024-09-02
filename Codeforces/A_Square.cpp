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
    int ip, ip2;
    vector<pair<int, int>> v;
    for (int i = 0; i < 4; i++)
    {
        cin >> ip;
        cin >> ip2;
        v.push_back({ip, ip2});
    }
    // for(int i=0;i<4;i++)
    // {
    //     cout<<v[i].first<< ' '<<v[i].second<<endl;
    // }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ( i != j && v[i].first == v[j].first)
            {
                cout << (v[i].second - v[j].second)*(v[i].second - v[j].second)<<'\n';
                return;
            }
        }
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