#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void runCase(){

    int k,q,n;
    cin>>k>>q;
    vector<int> v(k);
    for(int i=0;i<k;i++) cin>>v[i];
    for(int i=0;i<q;i++)
    {
        cin>>n;
        if(v[0]>n) cout<<n;
        else cout<<v[0]-1;
        cout<<" ";
    }
    cout<<'\n';
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