#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int ans=1,curr=1;
    for(int i=1;i<n;i++)
    {
        if(abs(v[i]-v[i-1])%2!=0)
        {
            curr++;
        }
        else
        {
            curr=1;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<'\n';
    return 0;
}