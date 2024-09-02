#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, profit = 0,curr=0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // curr=v[0];
    // for (int i = 0; i < n-1; i++)
    // {
    //     if(v[i+1]<v[i])
    //     {
    //         profit+=v[i]-curr;
    //         curr=v[i+1];
    //     }
    // }
    // if(v[n-1]>v[n-2]) 
    // {
    //     profit+=v[n-1]-curr;
    // }
    for(int i=1;i<n;i++) if(v[i]>v[i-1]) profit+=v[i]-v[i-1];
    cout<<profit<<'\n';
    return 0;
}