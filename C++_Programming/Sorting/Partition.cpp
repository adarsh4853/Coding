#include <bits/stdc++.h>
using namespace std;

//Partition -> Put element less than v[ind] before ind and element greter than v[ind] after ind

//Naive
void partition1(vector<int> &v,int l,int h,int ind)//Time Complexity -> O(n), Space Complexity -> O(n)
{
   vector<int> temp;
   for(int i=l;i<=h;i++)
   {
      if(v[i]<=v[ind]) temp.push_back(v[i]);
   }
   for(int i=l;i<=h;i++)
   {
      if(v[i]>v[ind]) temp.push_back(v[i]);
   }
   for(int i=l;i<=h;i++)
   {
      v[i]=temp[i-l];
   }
}

//Lomuto Partition
void partition2(vector<int> &v,int l,int h,int ind)
{
   swap(v[ind],v[h]);//put the element at the end form which we have to partition
   int pivot=v[h];//last element is pivot
   int i=l-1;
   for(int j=l;j<=h-1;j++)
   {
      if(v[j]<pivot)
      {
         i++;
         swap(v[i],v[j]);
      }
   }
   swap(v[i+1],v[h]);//put the pivot in the intersection of windows
   // return i+1;
}

//Hoare's Partition
void partition3(vector<int> &v,int l,int h,int ind)
{
   int pivot=v[l];
   int i=l,j=h;
   while(true) 
   {
      while(v[i]<pivot) i++;
      while(v[j]>pivot) j--;
      if(i>=j) break;
      swap(v[i],v[j]);
   }
   // return j;//returns the index from which left side elements are smaller or equal and right side are greater than or equal to pivot
}

//Hoare's partition is better than lomuto in number of comparisons, but hoare's partition doesn't ensures the location of pivot.
//Both hoare's and lomuto partition is unstable but naive partition is stable 

int main()
{
   int n,ind;
   cin>>n>>ind;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];

   //partition around index ind
   partition2(v,0,n-1,ind);
   for(int i=0;i<n;i++) cout<<v[i]<<" ";
   
   return  0;
}