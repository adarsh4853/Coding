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
 
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<n;i++)
    {
        if(c[i]!=a[i] && c[i]!=b[i])
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    cin >> tests;
 
    while (tests-- > 0)
    run_case();
}