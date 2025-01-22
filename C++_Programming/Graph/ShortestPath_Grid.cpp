#include <bits/stdc++.h>
using namespace std;
#define int long long

bool valid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void runCase(int &testcase) {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    pair<int, int> s, e;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            if (v[i][j] == 'A') s = {i, j};
            if (v[i][j] == 'B') e = {i, j};
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> par(n, vector<pair<int, int>>(m, {-1, -1}));

    queue<pair<int, int>> q;
    q.push(s);
    vis[s.first][s.second] = true;

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    char dir[] = {'D', 'U', 'R', 'L'};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == e.first && y == e.second) {
            string path = "";
            while (make_pair(x, y) != s) {
                auto [px, py] = par[x][y];
                for (int i = 0; i < 4; i++) {
                    if (px + dx[i] == x && py + dy[i] == y) {
                        path += dir[i];
                        break;
                    }
                }
                x = px;
                y = py;
            }
            reverse(path.begin(), path.end());
            cout << "YES\n" << path.size() << "\n" << path << "\n";
            return;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (valid(nx, ny, n, m) && v[nx][ny] != '#' && !vis[nx][ny]) {
                vis[nx][ny] = true;
                par[nx][ny] = {x, y};
                q.push({nx, ny});
            }
        }
    }

    cout << "NO\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    for (int i = 1; i <= tests; i++) {
        runCase(i);
    }
    return 0;
}
