#include <bits/stdc++.h>
using namespace std;

// vector<vector<string>> temp;

void solve(int n, int i, int ans[])
{
    if (i == n)
    {
        for(int i=0;i<n;i++) cout << ans[i] << " ";
        cout << "\n";
        // vector<string> ss(n);
        // for (int k = 0; k < n; k++)
        // {
        //     for (int l = 0; l < n; l++)
        //     {
        //         ss[k] += '.';
        //     }
        // }
        // for (int x = 0; x < n; x++)
        // {
        //     ss[x][ans[x]] = 'Q';
        // }
        // temp.push_back(ss);
        return;
    }
    for (int j = 0; j < n; j++)
    {
        bool flag = 1;
        for (int k = 0; k < i; k++)
        {
            if (ans[k] == j || abs(k - i) == abs(ans[k] - j))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            ans[i] = j;
            solve(n, i + 1, ans);
            ans[i] = -1;
        }
    }
    return;
}

void solveNQueens(int n)
{
    int ans[n];
    for(int i=0;i<n;i++) ans[i]=-1;
    solve(n, 0, ans);
    // return temp;
}

int main()
{
    int n;
    cin>>n;
    solveNQueens(n);
    return 0;
}