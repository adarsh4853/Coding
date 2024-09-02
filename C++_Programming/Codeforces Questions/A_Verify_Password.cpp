    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define pb push_back
    #define all(v) (v).begin(), (v).end()
    const int inf = (int)1e18;
    const int mod = 1e9 + 7;

    void runCase()
    {
        int n;
        string s;
        cin>>n>>s;
        for (int i = 1;i<n;i++)
        {
            if(s[i-1]>s[i])
            {
                cout<<"NO"<<'\n';
                return;
            }
            if(s[i]>='0' && s[i]<='9')
            {
                if(s[i-1]>='a' && s[i-1]<='z')
                {
                    cout<<"NO"<<'\n';
                    return;
                }
            }
        }
        cout<<"YES"<<'\n';
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