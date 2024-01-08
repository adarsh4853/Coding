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

// int penalty(vector<int> s)
// {
//     int p, sum = 0, size = s.size();
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + s[i];
//     }
//     if (sum < 0)
//         sum = -1 * sum;
//     return size * sum;
// }

void run_case()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            v.push_back(1);
        }
        else
        {
            v.push_back(-1);
        }
    }

    int cnt = 0, flag = 0, p = 0,np=0,nm=0;
    for(int i=0;i<n;)
    {

        //cout<<"p="<<p<<'\n';
        if(s[i]=='+')
        {
            np++;
            p++;
            i++;
        }
        if(s[i]=='-')
        {
            nm++;
            p++;
            i++;
        }
        //cout<<"np="<<np<<'\n';
        //cout<<"nm="<<nm<<'\n';
        if(np==nm && np!=0)
        {
            p=p-2*nm;
            np=0,nm=0;

        }
        //cout<<"p2="<<p << '\n'<<'\n';
        // if(np>1 && nm==0)
        // {
        //     p=p+1;
        //     np--;
        // }
        // if(nm>1 && np==0)
        // {
        //     p=p+1;
        //     nm--;
        // }
        // if(np>1 && nm!=0)
        // {
        //     np=0;
        // }
        // if(nm>1 && np!=0)
        // {
        //     nm=0;
        // }
        if(np>nm && nm!=0)
        {
            np=np-nm;
            nm=0;
            p=p-2;
        }
        if(np<nm && np!=0)
        {
            nm=nm-np;
            np=0;
            p=p-2;
        }
    }
    cout << p << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}