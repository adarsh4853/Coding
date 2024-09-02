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

    ll a, b, flag = 1;
    cin >> a >> b;
    if (a == b)
    {
        cout << "Bob" << '\n';
        return;
    }
    if (a > b)
    {
        a = a - b;
        b = 0;
    }
    else
    {
        b = b - a;
        a = 0;
    }

    for (int i = 0;; i++)
    {
        if (flag == 1)
        {
            if (a == 0)
            {
                swap(a, b);
                a = a - 1;
                flag = 0;
            }
            else
            {
                a = a - 1;
                flag = 0;
            }
        }
        if (flag == 0)
        {
            if (b == 0)
            {
                swap(a, b);
                b = b - 1;
                flag = 1;
            }
            else
            {
                b = b - 1;
                flag = 1;
            }
        }
        if ((a==0 && b==0) || (a==1 || b==1))
        {
            break;
        }
    }
    if (a == 0 && b == 0)
    {
        if (flag == 1)
        {
            cout << "Alice";
            return;
        }
        else
        {
            cout << "Bob";
            return;
        }
    }
    // if (a == 0 && b == 1)
    // {
    //     if (flag == 1)
    //     {
    //         cout << "Alice";
    //     }
    //     else
    //     {
    //         cout << "Bob";
    //     }
    // }
    // for (int i = 0;; i++)
    // {
    //     if (a - b == 1 || a - b == -1 || a - b == 0)
    //     {
    //         if (flag == 1)
    //         {
    //             cout << "Alice";
    //             return;
    //         }
    //         else
    //         {
    //             cout << "Bob";
    //             return;
    //         }
    //     }

    //     if (flag == 0 && b!=0)
    //     {
    //         b=b-1;
    //     }
    //     if(flag==1 && a!=0)
    //     {
    //         a=a-1;
    //     }
    //     if(a==0 && flag==1 && b!=0)
    //     {
    //         swap(a,b);
    //         a=a-1;
    //     }
    //     if(b==0 && flag==0 && b!=0)
    //     {
    //         swap(a,b);
    //         b=b-1;
    //     }
    // }
    // for (int i = 0;; i++)
    // {
    //     if (b>a && flag == 1 && (b-a)>1)
    //     {
    //         swap(a, b);
    //         if(a!=0)    a=a-1;
    //         else
    //         {
    //             cout<<"Bob"<<'\n';
    //             return;
    //         }
    //         flag=0;
    //     }
    //     if(a>b && flag==1)
    //     {
    //         if(a!=0)    a=a-1;
    //         else
    //         {
    //             cout<<"Bob"<<'\n';
    //             return;
    //         }
    //         flag=0;
    //     }
    //     if(a>b && flag==0 && (a-b)>1)
    //     {
    //         swap(a, b);
    //         if(b!=0)    b=b-1;
    //         else
    //         {
    //             cout<<"Alice"<<'\n';
    //             return;
    //         }
    //         flag=1;
    //     }
    //     if(b>a && flag==1 && (b-a)==1)
    //     {
    //         swap(a,b);
    //         if(a!=0)    a=a-1;
    //         else
    //         {
    //             cout<<"Bob"<<'\n';
    //             return;
    //         }
    //         flag=0;
    //     }
    //     if(a>b && flag==0 && (a-b)==1)
    //     {
    //         swap(a,b);
    //         if(b!=0)    b=b-1;
    //         else
    //         {
    //             cout<<"Alice"<<'\n';
    //             return;
    //         }
    //         flag=1;
    //     }
    //     if(a==b)
    //     {
    //         if(flag==1)
    //         {
    //             cout<<"Bob"<<'\n';
    //         }
    //         else cout<<"Alice"<<'\n';
    //         return;
    //     }
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