#include<bits/stdc++.h>
using namespace std;
#define int long long
#define push_back pb

void runCase(){

    int n,mini=INT64_MAX,maxi=0;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mini = v[i]<mini ? v[i] : mini;
        maxi = v[i]>maxi ? v[i] : maxi;
    }
    cout<<maxi-mini<<'\n';
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