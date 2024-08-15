#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n;
    string s;
    cin>>n>>s;
    vector<int> dig(n);
    int sum=0;
    for(int i=0;i<n;i++) 
    {
        dig[i]=s[i]-'0';
        sum+=dig[i];
    }
    if(n==2)
    {
        cout<<dig[0]*10+dig[1]<<'\n';
        return;
    }
    if(n==1)
    {
        cout<<dig[0]<<'\n';
        return;
    }
    if(n==3 && dig[1]==0)
    {
        int num1=dig[0]+dig[2];
        int num2=dig[0]*10+dig[2];
        int num3=dig[0]*10*dig[2];
        int num4=dig[0]*dig[2];
        cout<<min({num1,num2,num3,num4})<<'\n';
        return;
    }
    // cout<<"check"<<'\n';
    int ans=INT_MAX;
    if(dig[n-1]==0)
    {
        cout<<0<<'\n';
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        if(dig[i]==0)
        {
            cout<<0<<'\n';
            return;
        }
        int temp=dig[i]*10+dig[i+1];
        // cout<<temp<<'\n';
        for(int j=0;j<n;j++)
        {
            if(j!=i && j!=i+1 && dig[j]!=1) temp+=dig[j];
        }
        ans=min(ans,temp);
        temp=0;
    }
    cout<<ans<<'\n';
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