#include<bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n) {
	   // int max1=arr[0],max2=-1;
	   // for(int j=1;j<n;j++)
	   // {
	   //     if(max1<arr[j]) max1=arr[j];
	   // }
	   // for(int j=0;j<n;j++)
	   // {
	   //     if(arr[j]==max1) continue;
	   //     if(max2<arr[j]) max2=arr[j];
	   // }
	   // return max2;
       
	   int max1=arr[0],max2=-1;
	   for(int i=0;i<n;i++)
	   {
	      if(max1<arr[i])
	      {
	          max2=max1;
	          max1=arr[i];
	      }
	      if(max2<arr[i] && arr[i]!=max1) max2=arr[i];
	   }
	   return max2;
	}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   cout<<print2largest(arr,n);
   return  0;
}