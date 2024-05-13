#include <bits/stdc++.h>
using namespace std;

// Check if array can be divided into three parts with EQUAL SUM

bool canDivide(vector<int> v, int n)
{
    vector<int> prefsum(n);
    int temp=2;
    for (int i = 1; i < n; i++)
    {
        prefsum[i] = prefsum[i - 1] + prefsum[i];
        if(prefsum[i]%2==0) prefsum[i]/=2;
        if(prefsum[i]%3==0) prefsum[i]/=3;
        //now check if any element appears three times or not
        //Do it yourself
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool ans = canDivide(v, n);
    if (ans == true)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}