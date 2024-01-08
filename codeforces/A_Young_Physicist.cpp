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
 
bool sum(vector<int> a)
{
    int sum=0,len=a.size();
    for(int i=0;i<len;i++)
    {
        sum=sum+a[i];
    }
    if(sum==0) return 0;
    else return 1;
}

void run_case() 
{
    int n,input=0,b;
    vector<int> x,y,z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        x.push_back(input);
        cin>>input;
        y.push_back(input);
        cin>>input;
        z.push_back(input);
    }
    b=sum(x);
    if(b!=0)
    {
        cout<<"NO";
        return;
    }
    b=sum(y);
    if(b!=0)
    {
        cout<<"NO";
        return;
    }
    b=sum(z);
    if(b!=0)
    {
        cout<<"NO";
        return;
    }
    cout<<"YES";
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    //cin >> tests;
 
    while (tests-- > 0)
    run_case();
}