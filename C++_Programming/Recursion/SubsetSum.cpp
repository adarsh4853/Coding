#include<bits/stdc++.h>
using namespace std;

// int subsetSum(vector<int> v,int sum,int n,vector<int> curr)
// {
//    int ans=0;
//    for(int i=0;i<curr.size();i++) ans+=curr[i];
//    if(n==0 && ans==sum) return 1;
//    if(n==0) return 0;
//    int sum1=subsetSum(v,sum,n-1,curr);
//    curr.push_back(v[n-1]);
//    sum1+=subsetSum(v,sum,n-1,curr);
//    return sum1;
// }

//Time complexity-> Theta(2^n)

int subsetSum(vector<int> v,int n,int sum)
{
   if(n==0 && sum==0) return 1;
   else if(n==0) return 0;
   return subsetSum(v,n-1,sum)+subsetSum(v,n-1,sum-v[n-1]);
}

int main()
{
   int n,sum;
   cin>>n>>sum;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   vector<int> curr;
   cout<<subsetSum(v,n,sum);
   return  0;
}   