#include <bits/stdc++.h>
using namespace std;
#define int long long

// https://atcoder.jp/contests/abc387/tasks/abc387_d
// movements are alternative

bool isValid(int i, int j, int m, int n) {
    return i >= 0 && j >= 0 && i < m && j < n;
}

int bfs(vector<vector<char>> &grid, int startX, int startY, vector<vector<bool>> &visited, int m, int n, int move) {
    queue<pair<pair<int, int>, int>> q; // {{x, y}, move}
    q.push({{startX, startY}, move});
    visited[startX][startY] = true;

    vector<pair<int, int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}}; // Down, Right, Up, Left
    int steps = 0;

    while (!q.empty()) {
        int levelSize = q.size();
        while (levelSize--) {
            auto [pos, move] = q.front();
            auto [x, y] = pos;
            q.pop();

            for (int k = 0; k < 4; k++) {
                if ((move == 1 && (k == 0 || k == 2)) || (move == 0 && (k == 1 || k == 3))) {
                    int nx = x + directions[k].first;
                    int ny = y + directions[k].second;

                    if (isValid(nx, ny, m, n) && !visited[nx][ny] && grid[nx][ny] != '#') {
                        if (grid[nx][ny] == 'G') return steps + 1;
                        q.push({{nx, ny}, !move});
                        visited[nx][ny] = true;
                    }
                }
            }
        }
        steps++;
    }

    return -1;
}

void solve() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> grid(m, vector<char>(n));
    pair<int, int> start;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') start = {i, j};
        }
    }

    vector<vector<bool>> visited(m, vector<bool>(n, false));

    int stepsWithMove0 = bfs(grid, start.first, start.second, visited, m, n, 0);
    fill(visited.begin(), visited.end(), vector<bool>(n, false));
    int stepsWithMove1 = bfs(grid, start.first, start.second, visited, m, n, 1);

    if (stepsWithMove0 != -1 && stepsWithMove1 != -1)
        cout << min(stepsWithMove0, stepsWithMove1) << '\n';
    else
        cout << max(stepsWithMove0, stepsWithMove1) << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
