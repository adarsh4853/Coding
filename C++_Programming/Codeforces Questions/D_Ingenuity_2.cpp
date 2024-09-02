#include <bits/stdc++.h>
using namespace std;
#define int long long

// const int inf = (int)1e18;
// const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if ((n % 2 != 0) || (n == 2 && s[0] != s[1]))
    {
        cout << "NO" << '\n';
        return;
    }
    int N = 0, S = 0, E = 0, W = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
            N++;
        else if (s[i] == 'S')
            S++;
        else if (s[i] == 'E')
            E++;
        else
            W++;
    }
    N = abs(N - S);
    E = abs(E - W);
    if (N % 2 != 0 || E % 2 != 0)
    {
        cout << "NO" << '\n';
        return;
    }
    int rn = 0, re = 0, hn = 0, he = 0;
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            if (rn <= hn)
            {
                ans.push_back('R');
                rn++;
            }
            else
            {
                ans.push_back('H');
                // cout<<'H';
                hn++;
            }
        }
        else if (s[i] == 'S')
        {
            if (rn <= hn)
            {
                ans.push_back('H');
                // cout<<'H';
                hn--;
            }
            else
            {
                ans.push_back('R');
                // cout<<'R';
                rn--;
            }
        }
        else if (s[i] == 'E')
        {
            if (re <= he)
            {
                ans.push_back('R');
                // cout<<'R';
                re++;
            }
            else
            {
                ans.push_back('H');
                // cout<<'H';
                he++;
            }
        }
        else
        {
            if (re <= he)
            {
                ans.push_back('H');
                // cout<<'H';
                he--;
            }
            else
            {
                ans.push_back('R');
                // cout<<'R';
                re--;
            }
        }
    }
    int R = 0, H = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 'R')
            R++;
        else
            H++;
    }
    int i = 0, j = 0;
    if (R == 0 || H==0)
    {
        N=S=E=W=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='N') N=i;
            if(s[i]=='S') S=i;
            if(s[i]=='E') E=i;
            if(s[i]=='W') W=i;
        }
        if(N!=-1 && S!=-1) 
        {
            if(R==0) ans[N]=ans[S]='R';
            else ans[N]=ans[S]='H';
        }
        else if(W!=-1 && E!=-1)
        {
            if(R==0) ans[W]=ans[E]='R';
            else ans[W]=ans[E]='H';
        }
    }

    cout << ans << '\n';
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