#include <bits/stdc++.h>
using namespace std;
int64_t inf = (int64_t)1e+18;
int mod = 1000000007;
#define int long long

// @author: siddhant139

void runCase(int &testcase)
{
    int n, k,s,m=inf;
    cin >> n ;
    vector<int> a(n+1);
    map<int,int> ps;
    map<int,int> sp;

    for (int i=1;i<n+1;i++) {
        cin >> a[i]; 
    }

    sort(a.begin(),a.end());

    for (int i=n;i>0;i--) { 
        ps[a[i]]=i;
    }

    for (int i=1;i<n+1;i++) { 
        sp[a[i]]=i;
    }
    for(int i=n;i>0;i--){
        if(a[i]/2 < a[1]) m=min(m, ( n - sp[a[i]] ) ) ;
        else {
            auto it = sp.lower_bound(a[i]/2);
            m=min(m, ( it->second + n - sp[a[i]] ) ) ;
        }
    }
    cout << m <<"\n";
}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests = 1;
    cin >> tests;
    for (int i = 1; i <= tests; i++)
        runCase(i);

    return 0;
}