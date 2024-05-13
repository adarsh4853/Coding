#include <bits/stdc++.h>
using namespace std;

//See dry run in notebook

int main()
{
    int n;
    cin>>n;
    vector<int> l(n),r(n);
    for(int i=0;i<n;i++) cin>>l[i];
    for(int i=0;i<n;i++) cin>>r[i];

    vector<int> prefSum(1000);//Assuming that range size doesn't exceed 1000(can assumed as greater sized also)

    for(int i=0;i<n;i++)
    {
        prefSum[l[i]]++;//Marking 1 at the starting of a range to show that element from this index appears in this ranges
        prefSum[r[i]+1]--;//Marking -1 at the ending of a range to show that a range ends from here
    }
    int maxi=INT_MIN,ans=0;
    for(int i=1;i<1000;i++)//Calculate prefix Sum
    {
        prefSum[i]+=prefSum[i-1];
        if(maxi<prefSum[i])
        {
            maxi=prefSum[i];
            ans=i;
        }
    }
    cout<<ans<<'\n';
    return 0;
}