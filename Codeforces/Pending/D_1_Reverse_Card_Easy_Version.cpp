#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(),(v).end()

int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

void runCase(){

    int n,m,cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            double val=((double)i+j)/j*gcd(i,j);
            if(floor(val)==ceil(val)) cnt++;
        }
    }
    cout<<cnt<<'\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for(int i = 1;i <= tests; i++)
    {
    // cout << "#Case " << i << ": \n";
    runCase();
    }

    return 0;
}