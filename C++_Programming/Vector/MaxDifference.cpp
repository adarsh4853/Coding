#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mini = INFINITY , ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans=max(v[i]-mini,ans);
        mini=min(v[i],mini);
    }
    cout<<ans;
    return 0;
}