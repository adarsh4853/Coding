#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int a;
    cin>>a;
    vector<int> dig;
    while(a>0)
    {
        dig.push_back(a%10);
        a/=10;
    }
    reverse(dig.begin(),dig.end());
    if(dig[0]==1 && dig[1]==0)
    {
        if(dig.size()==3 && dig[2]>=2)
        {
            cout<<"YES"<<'\n';
        }
        else if(dig.size()==4 && (dig[2]*10+dig[3])>=2 && dig[2]!=0)
        {
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
        return;
    }
    cout<<"NO"<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
        runCase();
    return 0;
}