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

int arrsum(vector<int> a)
{
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
        sum += a[i];
    return sum;
}

void run_case(int &tttt)
{
    // cout<<"Case"<<" : "<<tttt<<"\n";

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = arrsum(a);
    if (sum % 3 == 0)
    {
        cout << 0;
        return;
    }
    if (sum % 3 == 2)
    {
        cout << 1;
        return;
    }
    if (sum % 3 == 1)
    {
        int temp=sum-1;
        if(count(a.begin(), a.end(), 1) > 0)
        {
            cout << 1;
            return;
        }
        else
        {
            while(temp>0)
            {
                if(count(a.begin(),a.end(),sum-(temp-3))>0)
                {
                    cout<<1;
                    return;
                }
                temp-=3;
            }
        }
        cout<<2;
        return;
    }
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