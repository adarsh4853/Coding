#include <bits/stdc++.h>
using namespace std;

//Given a binary array, you have to find minimum numbers of groups to flip so that array becomes same

//fax -- Group count will always differ by one or zero
// element which is appearing in second group will have count same or less than count of other element's group
// 1 1 0 0 0 1 1 0 1
// 0 0 0 0 0 0 0 0 0 0 1

void minflips(vector<int> v,int n)
{
    for(int i=1;i<n;i++)
    {
        if(v[i-1]!=v[i])
        {
            if(v[i]!=v[0])
            {
                cout<<"From "<<i<<" to ";
            }
            else cout<<i-1<<'\n';
        }
    }
    if(v[n-1]!=v[0])
    {
        cout<<(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    minflips(v,n);
    return 0;
}