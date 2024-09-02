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

int fact(int n)
{
    int prod=1;
    for(int i=n;i>0;i--)
    {
        prod*=i;
    }
    return prod;
}

void run_case() 
{
    int n;
    vector<int> v(n,0);
    int val=fact(n)/fact(3)/fact(n-3);
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[v[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(i!=j && v[i]+v[j]);
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    cin >> tests;
 
    while (tests-- > 0)
    run_case();
}