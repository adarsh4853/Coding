#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void runCase(){

    string s;
    int a=0,b=0;
    cin>>s;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]=='A') a++;
        else b++;
    }
    cout<< (a>b ? "A":"B") << '\n'; 
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