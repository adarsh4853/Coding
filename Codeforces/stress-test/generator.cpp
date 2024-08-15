#include <bits/stdc++.h>
using namespace std;
constexpr int64_t inf = (int64_t)1e+18;
constexpr int mod = 1000000007;

mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
inline int64_t rnd(int64_t l = 0, int64_t r = 1E9)
{
    if (l > r)
        swap(l, r);
    return std::uniform_int_distribution<int64_t>(l, r)(rng);
    // return std::uniform_real_distribution<long double>(l, r)(rng);
}

std::string generateRandomString(int n) {
    std::string alphabet = "01";
    std::string randomString;
    randomString.reserve(n);

    std::srand(std::time(0)); // Seed the random number generator

    for (int i = 0; i < n; ++i) {
        randomString += alphabet[std::rand() % alphabet.size()];
    }

    return randomString;
}

void runCase(int &testCase)
{
    // cout << "#Case " << testCase << ": \n";
    int t = rnd(1, 1);
    cout << t << "\n";
    int n = rnd(1,50);
    cout << n << "\n";
    int m=rnd(1,50);
    // while(n>m) m=rnd(1,200);
    cout << m << "\n";
    // int l = rnd(1,8);
    // cout << l << "\n";
    // int r = rnd(8,20);
    // cout << r << "\n";
    // vector<int> v(n);
    // for(int i=0;i<n;i++)
    // {
    //     v[i]=rnd(1,10);
    // }
    // sort(v.begin(),v.end());

    // for(int i=0;i<n;i++)
    //     cout<<v[i]<<' ';
    // // cout<<generateRandomString(n)<<'\n';
    cout << "\n";
}

int main()
{

    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int tests = 1;
    // cin >> tests;
    for (int i = 1; i <= tests; i++)
        runCase(i);

    return 0;
}