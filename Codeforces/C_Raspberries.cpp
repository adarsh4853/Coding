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
 
int cnt = 0;

void checkDiv(vector<int> v,int n,int k)
{
    for(int i=0;i<n;i++)
    {
        int prod=1;
        for(int j=0;j<n;j++)
        {
            prod*=v[j];
        }
        if(prod%k==0)
        {
            cout<< cnt;
        }
    }
}

void run_case() 
{
    int n,k,input;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    checkDiv(v,n,k);
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    cin >> tests;
 
    while (tests-- > 0)
    run_case();
}