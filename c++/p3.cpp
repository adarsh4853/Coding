#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n],flag=0;
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if((a[i]+a[j])==target)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
                flag=1;
                break;
            } 
        }
        if(flag==1) break;
    }
    return 0;
}
