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

    string s;
    cin >> s;
    string k = "hello";
    int n = s.length(), cnt = 0,i = 0;
    for (i = 0; i < n; )
    {
        auto it = find(s.begin() + i, s.end(), k[cnt]);
        if (it != s.end())
        {
            i = distance(s.begin(), it) + 1;
            cnt++;
            if(cnt == 4)
            { break; }
        }
        else
        {
            cout << "NO";
            return;
        }  
    }
    auto it = find(s.begin() + i, s.end(), k[cnt]);
    cout << ((it != s.end())?"YES\n":"NO\n");


}

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int tests = 1;
        //cin >> tests;

        while (tests-- > 0)
            run_case();
    }
    if(n < 5)
    {
        cout<<"NO";
        return;
    }
    