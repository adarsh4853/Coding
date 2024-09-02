#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int m;
    cin>>m;
    while(m--)
    {
        vector<int> alp(26,INT_MIN);
        string s;
        cin>>s;
        if(s.size()!=n)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        bool flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(alp[s[i]-'a']==INT_MIN) 
            {
                bool occ=false;
                for(int j=0;j<26;j++)
                {
                    if(alp[j]==v[i] && (j!=alp[i]-'a'))
                    {
                        occ=true;
                        break;
                    }
                }
                if(occ==false) alp[s[i]-'a']=v[i];
                else 
                {
                    cout<<"NO"<<'\n';
                    flag=1;
                    break;
                }
            }
            else if(alp[s[i]-'a']!=v[i])
            {
                cout<<"NO"<<'\n';
                flag=1;
                break;
            }
        }
        if(flag)
        {
            continue;
        }
        cout<<"YES"<<'\n';
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