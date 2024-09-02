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
 
    ll n,temp;
    cin>>n;
    if(n%4==0 || n%7==0 || n%74==0|| n%47==0|| n%744==0|| n%774==0|| n%777==0 || n%444==0|| n%447==0|| n%477==0|| n%474==0|| n%747==0) 
    {
        cout<<"YES";
        return;
    }
    while(n>0)
    {
        temp=n%10;
        if(temp!=4 && temp!=7)
        {
            cout<<"NO";
            return;
        }
        n=n/10;
    }
    cout<<"YES";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    //cin >> tests;
 
    while (tests-- > 0)
    run_case();
}