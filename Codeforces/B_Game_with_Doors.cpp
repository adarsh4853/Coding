#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int l,r,L,R;
    cin>>l>>r>>L>>R;
    int cnt=0;
    if((r<L && l<L) || (R<l && L<l)) cout<<1<<'\n';
    else
    {
        for(int i=l;i<=r;i++)
        {
            if(i>=L && i<=R) cnt++;
        }
        cnt+=1;
        if(r==R) cnt--;
        if(l==L) cnt--;
        cout<<cnt<<'\n';
    }
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