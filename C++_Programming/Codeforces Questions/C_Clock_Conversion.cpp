#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    string s1, s2;
    cin >> s1;
    int hour = (s1[0]-'0')*10 + (s1[1]-'0');
    if(s1[0]=='0' && s1[1]=='0')
    {
        s2="12:";
        s2=s2+s1[3]+s1[4];
        s2+=" AM";
        cout<<s2<<'\n';
        return;
    }
    if(hour-12>0 && abs(hour-12) < 10 ) s2="0";
    else if(hour<10) s2="0";
    if(hour>12) s2+=to_string(hour-12);
    else s2+=to_string(hour);
    s2=s2+":"+ s1[3]+s1[4];
    if(hour>=12) s2+= " PM";
    else s2+=" AM";
    cout<<s2<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }

    return 0;
}