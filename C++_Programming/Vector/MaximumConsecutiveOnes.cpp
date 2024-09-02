#include <bits/stdc++.h>
using namespace std;

int maxConsOnes(vector<int> v,int n)
{
    int ans=0,curr=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1) curr++;
        else curr=0;
        ans=max(ans,curr);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<maxConsOnes(v,n)<<'\n';
    return 0;
}