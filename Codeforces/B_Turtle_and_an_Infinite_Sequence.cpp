#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

// vector<int> v;

int func(int n)
{
    if(n==0) return n|n+1;
    else return n-1|n|n+1;
}


void runCase()
{
    int n,sec;
    cin>>n>>sec;
    int a=n+sec,b=max(n-sec,0LL),ans=0;
    for(int i=sec;i>=0;i--)
    {
        ans=ans|func(ans-1)|func(ans+1);
    }
    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    // fill();

    for (int i = 1; i <= tests; i++)
        runCase();
    return 0;
}