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
    cin>>s;
    int size=s.length();
    if(size>10)
    {
        cout<<s[0]<<size-2<<s[size-1]<<'\n';
    }
    else{
        cout<<s<<'\n';
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