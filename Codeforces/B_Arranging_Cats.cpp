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
 
    int box,cnt=0;
    cin >> box;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<box;i++)
    {
        if(a[i]!=b[i])
        {
            int flag=0;
            for(int j=i+1;j<box;j++)
            {
                if(a[j] != b[j] && a[i]!=a[j])
                {
                    swap(a[i],a[j]);
                    flag=1;
                    cnt++;
                    break;
                }
            }
            if(flag==0) cnt++;
        }
    }
    cout<<cnt<<'\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    cin >> tests;
 
    while (tests-- > 0)
    run_case();
}