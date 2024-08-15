#include <bits/stdc++.h>
using namespace std;

// GFG rat in maze-I

bool isSafe(vector<vector<int>> &mat, int i, int j, vector<vector<bool>> &visited)
{
    int n = mat.size();
    return (i >= 0 && j >= 0 && i < n && j < n && mat[i][j] == 1 && !visited[i][j]);
}

void solve(vector<vector<int>> &mat, int i, int j, vector<vector<bool>> &visited, string path, vector<string> &ans)
{
    int n = mat.size();
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[i][j] = true;

    if (isSafe(mat, i + 1, j, visited))
    {
        solve(mat, i + 1, j, visited, path + "D", ans);
    }
    if (isSafe(mat, i, j + 1, visited))
    {
        solve(mat, i, j + 1, visited, path + "R", ans);
    }
    if (isSafe(mat, i - 1, j, visited))
    {
        solve(mat, i - 1, j, visited, path + "U", ans);
    }
    if (isSafe(mat, i, j - 1, visited))
    {
        solve(mat, i, j - 1, visited, path + "L", ans);
    }

    visited[i][j] = false;
}

vector<string> ratinmaze(vector<vector<int>> &mat)
{
    vector<string> ans;
    int n = mat.size();
    if (n == 0 || mat[0][0] == 0 || mat[n - 1][n - 1] == 0)
    {
        return ans;
    }
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    solve(mat, 0, 0, visited, "", ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    ratinmaze(v);
    return 0;
}