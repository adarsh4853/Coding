#include <bits/stdc++.h>
using namespace std;

//Time complexity -> O(n)
//Space complexity -> O(1)

int findMajority(vector<int> v,int n)
{
    int ans=0,cnt=1;

    //Find a candidate(element that appears maximum times in an array)
    for(int i=1;i<n;i++)
    {
        if(v[i]==v[ans]) cnt++;//whenever v[ans] appears increament count
        else cnt--;//Decreament count when different element appears
        if(cnt==0) 
        {
            ans=i;//change ans to i whenever count becomes 0, because if count becomes 0 then that element can't
            cnt=1;//appear more than n/2 times
        }
    }

    //Check if candidate is actually a majority
    cnt=0;
    for(int i=0;i<n;i++) if(v[i]==v[ans]) cnt++;
    if(cnt<=n/2) ans=-1;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<findMajority(v,n);
    return 0;
}