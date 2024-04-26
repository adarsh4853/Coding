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
using namespace std;

void run_case(int &tttt)
{
    // cout<<"Case"<<" : "<<tttt<<"\n";

    int n, k, mini = INT64_MAX, ind;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int flag=0;
    int j=1;
    for(j=1;;j++)
    {
        flag=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == j)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            a[n-1]=j;
            k--;
        }
        if(k==0)
        {
            break;
        }
    }
    
    cout<<j<<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 0; i < tests; i++)
        run_case(i);
}