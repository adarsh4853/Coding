#include <bits/stdc++.h>
using namespace std;

// v[i] = {value,weight} of ith item

// Memoization
int knapsack(int i, int wt, vector<pair<int, int>> &v, vector<vector<int>> &dp)
{
    if (i == 0)
    {
        if (wt >= v[i].second)
            return v[i].first;
        else
            return 0;
    }
    if (dp[i][wt] != -1)
        return dp[i][wt];
    int not_take = knapsack(i - 1, wt, v, dp);
    int take = INT_MIN;
    if (v[i].second <= wt)
    {
        take = v[i].first + knapsack(i - 1, wt - v[i].second, v, dp);
    }
    return dp[i][wt] = max(take, not_take);
}

//Tabulation
int knapsack(int n, int wt, vector<pair<int, int>> &v)
{
    vector<vector<int>> dp(n + 1, vector<int>(wt + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= wt; j++)
        {
            dp[i][j] = dp[i - 1][j]; // Don't take the current item
            if (j >= v[i - 1].second)// Check if the current item can be taken
            {                                                                              
                dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i - 1].second] + v[i - 1].first); // Take the item
            }
        }
    }
    return dp[n][wt];
}

int main()
{
    int n, wt;
    cin >> n >> wt;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first;
    for (int i = 0; i < n; i++)
        cin >> v[i].second;
    vector<vector<int>> dp(n, vector<int>(wt + 1, -1));
    // cout<<knapsack(n-1,wt,v,dp)<<'\n';
    cout << knapsack(n, wt, v) << '\n';
    return 0;
}