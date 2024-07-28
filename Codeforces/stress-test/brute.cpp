#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define sz(x) ((long long)x.size())
#define all(a) (a).begin(), (a).end()

using namespace std;

void solve(long long t){
    long long n,m;
    cin>>n>>m;
    long long a[n];
    map<long long,long long> ma;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        ma[a[i]]++;
    }
    long long ans = 0;
    for(long long i=0;i<n;i++){
        long long num = m/a[i];
        long long rem = m - a[i]*min(num,ma[a[i]]);

        long long num2 = rem/(a[i]+1);
        long long rem2 = rem - (a[i]+1)*min(num2,ma[a[i]+1]);

        //cout<<rem2<<endl;

        long long cur = a[i]*min(num,ma[a[i]]) + (a[i]+1)*min(num2,ma[a[i]+1]) + min(rem2,min(min(num,ma[a[i]]),ma[a[i]+1]-min(num2,ma[a[i]+1])));
        
        //cout<<a[i]<<" "<<min(num,ma[a[i]])<<" "<<num2<<endl;
        ans = max(ans,cur);
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t=1;
    cin>>t;
    for(long long tt=0;tt<t;tt++){
        solve(tt);
    }
    return 0;
}