#include <bits/stdc++.h>
using namespace std;

//find maximum sum of k consecutive elements(subarray)

int maxSumOfKsizedSubarrays(vector<int> v,int n,int k)
{
    int currsum=0;
    for(int i=0;i<k;i++) currsum+=v[i];//finding first window sum
    int maxsum=currsum;
    for(int i=k;i<n;i++)//slide the window
    {
        currsum+=(v[i]-v[i-k]);
        maxsum=max(currsum,maxsum);
    }
    return maxsum;
}

//Subarray of Size K with given Sum

int subarrayOfSizeKWithGivenSum(vector<int> v,int n,int k,int target)
{
    int sum=0;
    for(int i=0;i<k;i++) sum+=v[i];
    if(sum==target) return 1;
    for(int i=k;i<n;i++)
    {
        sum+=v[i]-v[i-k];
        if(sum==target) return 1;
    }
    return 0;
}

//Subarray of given sum in array which contains *NON-NEGATIVE INTEGERS*

/*Hashing takes O(n) extra space in solving these type of problems. If array contains negative integers also then hashing is best.*/

//5 4 0 0 3 10 5
// (j     i)

int subarrayWithGivenSum(vector<int> v,int n,int target)
{
    int sum=v[0],i=1,j=0;
    while(i<n)
    {
        //if sum<target add next element
        if(sum<target)
        {
            sum+=v[i];
            i++;
        }
        //if sum>target then remove the element at pointer j
        else if(sum>target)
        {
            sum-=v[j];
            j++;
        }
        if(sum==target) return 1;
    }
    return 0;
}

//print first M N-bonacci number (fibonacci is 2-bonacci)
//N=3 -> 0 0 1 1 2 4 7 13
//N=4 -> 0 0 0 1 1 2 4 8 15 29

//Do this during revision(store in a array) in O(N*M) Time compelxity

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    // cout<<maxSumOfKsizedSubarrays(v,n,k)<<'\n';

    int target;
    cin>>target;
    // cout<<subarrayOfSizeKWithGivenSum(v,n,k,target)<<'\n';
    // cout<<subarrayWithGivenSum(v,n,target)<<'\n';

    // Nbonacci();
    return 0;
}