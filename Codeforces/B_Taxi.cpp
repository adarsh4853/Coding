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
 
    int n,temp,sum=0,cnt=0;
    cin>>n;
    // vector<int> v;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>temp;
    //     v.push_back(temp);
    //     if(temp==4) cnt++;
    // }
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==4) cnt++;
        mpp[temp++];
    }
    for(auto &e:mpp)
    {
        if(e.first==3)
        {
            if(mpp.count(1)!=0)
            {
                cnt++;
                mpp[1]--,mpp[3]--;
            }
            else 
            {
                cnt++;
                mpp[3]--;
            }
        }
        if(e.first==2)
        {
            if(mpp.count(2)>1)
            {
                cnt++;
                mpp[2]-=2;
            }
            else
            {
                cnt++;
                mpp[2]--;
            }
        }
    }
    for(auto &e:mpp)
    {
        if(e.first==1)
        {
            cnt++;
        }
    }
    cout<<cnt;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    //cin >> tests;
 
    while (tests-- > 0)
    run_case();
}