#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++) mpp[v[i]]++;
    for(auto it:mpp)
    {
        cout<<"Frequency of "<<it.first<<" -> "<<it.second<<'\n';
    }
    return 0;
}