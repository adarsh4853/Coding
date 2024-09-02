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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(m, 0);
    for (ll i = 0; i < m; i++) cin >> v[i];
    ll cnt=v[0]-1;
    for(ll i=1;i<m;i++)
    {
        if(v[i-1]-v[i]>0) cnt+=n+(v[i]-v[i-1]);
        else cnt+=v[i]-v[i-1];
    }
    cout<<cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tests = 1;
    while (tests-- > 0)
        run_case();
}