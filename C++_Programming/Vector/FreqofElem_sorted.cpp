#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int curr=v[0];
    for (int i = 0; i < n; i++)
    {
        if(curr==v[i]) cnt++;
        else
        {
            cout<<curr<<"->"<<cnt<<'\n';
            cnt=1;curr=v[i];
        }
    }
    cout<<curr<<"->"<<cnt<<'\n';
    return 0;
}