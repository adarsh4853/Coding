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
    int n,m,ip,maxi=0,diff;
    cin>>n>>m;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        v1.push_back(ip);
    }
    for(int i=0;i<m;i++)
    {
        cin>>ip;
        v2.push_back(ip);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            diff=abs(v2[j]-v1[i]);
            maxi=max(maxi,diff);
            
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