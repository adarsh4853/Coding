#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

int binExp(int x,int n)
{
    int ans=1;
    while(n>0)
    {
        if(n&1) ans=ans*x;
        x=x*x;
        n=n>>1;
    }
    return ans;
}

void runCase()
{
    int a, b, l;
    cin >> a >> b >> l;
    int cnt=0;
    set<int> ss;
    for(int x=0;;x++)
    {
        int temp1=binExp(a,x);
        if(temp1>l) break;
        for(int y=0;;y++)
        {
            int temp2=binExp(b,y);
            if(temp2>l) break;
            int mul=temp1*temp2;
            if(mul>l) break;
            if((l%mul==0) && (ss.find(l/mul)==ss.end())) 
            {
                cnt++;
                ss.insert(l/mul);
            }
        }
    }
    cout<<cnt<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }

    return 0;
}