#include <bits/stdc++.h>
using namespace std;

//Time complexity -> O(n)
//Space complexity -> O(1)

int maxSubArray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=nums.size();

        //Kadane's Algorithm
        // int sum=nums[0],currmax=nums[0];
        // for(int i=1;i<n;i++)
        // {
        //     sum+=nums[i];
        //     currmax=max(sum,currmax);
        //     if(sum<0) sum=0;
        // }
        // return currmax;

        //Better one
        int sum=nums[0],currmax=nums[0];
        for(int i=1;i<n;i++)
        {
            sum=max(sum+nums[i],nums[i]);
            currmax=max(sum,currmax);
        }
        return currmax;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<maxSubArray(v)<<'\n';
    return 0;
}