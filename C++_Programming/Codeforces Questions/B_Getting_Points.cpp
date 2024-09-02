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

        ll n, p, l, t, nt, count, temp;
        cin >> n >> p >> l >> t;
        temp = p;
        // if (n % 7 != 0)
        //     nt = n / 7 + 1;
        // else
        //     nt = n / 7;
        nt = (n+6)/7;
        for (int j = n; j > 0;)
        {
            if (nt != 0)
            {
                temp -= 2 * t;
                nt -= 2;
            }
            temp -= l;
            j--;
            if (temp <= 0)
            {
                cout << j << '\n';
                return;
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