    #include <bits/stdc++.h>
    using namespace std;
    #define int long long

    //const int inf = (int)1e18;
    //const int mod = 1e9 + 7;

    void runCase(int &testcase)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int ans=INT64_MAX;
        for(int i=0;i<n-1;i++)
        {
            int sum=v[i]+v[i+1];
            auto it = lower_bound(v.begin(),v.end(),sum);
            int elem=-1;
            if(it==v.end()) it--;
            elem=*it;
            while(elem>=sum && it!=v.begin()) 
            {
                it--;
                elem=*it;
            }
            int temp1=i,temp2=it-v.begin();
            ans=min(ans,n-1-abs((temp2-temp1))); 
            // cout<<ans<<' ';
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
        {
            // cout << "Case #" << i << ": \n";
            runCase(i);
        }
        return 0;
    }