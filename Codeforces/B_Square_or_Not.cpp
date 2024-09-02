#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=0;
    int i=0;
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        {
            flag=true;
            break;
        }
    }
    if(flag==false || i*i!=n) 
    {
        cout<<"No"<<'\n';
        return;
    }
    vector<vector<int>> v(i,vector<int>(i));
    int ind=0;
    // cout<<"ch" <<i<<'\n';
    for(int k=0;k<i;k++)
    {
        for(int j=0;j<i;j++)
        {
            if((k==0 || k==i-1) && s[ind]=='0')
            {
                cout<<"No"<<'\n';
                return;
            }
            v[k][j]=s[ind];
            ind++;
        }
    }
    for(int k=0;k<i;k++)
    {
        if(v[k][0]!='1' || v[k][i-1]!='1')
        {
            cout<<"No"<<'\n';
            return;
        }
        if(k==0 || k==i-1) continue;
        for(int j=1;j<i-1;j++)
        {
            if(v[k][j]!='0')
            {
                cout<<"No"<<'\n';
                return;
            }
        }
    }
    cout<<"Yes"<<'\n';
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