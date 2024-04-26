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
 
void swapChar(string &s,int size)
{
    int a=0,b=1;
    while(b<size)
    {
        if(s[a]!=s[b] && (b-a)>1)
        {
            swap(s[a],s[b]);
            b++;
            a++;
            cout<<s<<"F\n";
        }
        else if(s[a]!=s[b] && (b-a)==1)
        {
            swap(s[a],s[b]);
            b+=2;
            a+=2;
            cout<<s<<"S\n";
        }
        else
        {
            b++;
        }
    }
}

void run_case() 
{
 
    string s;
    cin>>s;
    string temp;
    int size=s.length();
    swapChar(s,size);
    cout<<s<<'\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    cin >> tests;
 
    while (tests-- > 0)
    run_case();
}