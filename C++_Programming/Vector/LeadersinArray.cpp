#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxi=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for (int i = n-1; i >= 0; i--)
    {
        if(v[i]>maxi) 
        {
            cout<<v[i]<<" ";
            maxi=v[i];
        }
    }
    return 0;
}