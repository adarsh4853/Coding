#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void runCase(){

    int n,sum=0;
    cin>>n;
    int div=n/10,mod=n%10;
    sum=46*div;
    cout<<sum<<'\n';
    for(int i=1;i<div;i++)
    {
        sum+=10*i;
        cout<<sum<<'\n';
    }
    sum+=(mod*(mod+1)/2) + mod*div;
    cout<<sum<<'\n';
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