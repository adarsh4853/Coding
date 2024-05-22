#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int sum=0,cnt=0;
    unordered_set<int> ss;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(ss.find(sum)!=ss.end()) cnt++; 
        else if(sum==0) cnt++;
        else ss.insert(sum);
    }
    cout<<cnt<<'\n';
    return 0;
}

