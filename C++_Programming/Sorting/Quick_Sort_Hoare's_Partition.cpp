#include <bits/stdc++.h>
using namespace std;

//Hoare's Partition
int partition(vector<int> &v,int l,int h)
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
   return j;
}

void quickSort(vector<int> &v, int l, int h)
{
    if (l < h)
    {
        int p = partition(v, l, h);
        quickSort(v, l, p);//p in hoare's partition because pivot is not at its correct place
        quickSort(v, p + 1, h);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    quickSort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}