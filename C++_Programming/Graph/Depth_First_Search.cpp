#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

//TC -> O(V+E)
void dfsOfGraph(vector<int> adj[], int source, vector<bool> &visited)
{
    ans.push_back(source);
    visited[source] = true;
    for (int x : adj[source])
        if (visited[x] == false)
            dfsOfGraph(adj, x, visited);
}

void dfs(vector<int> adj[], int v)
{
    vector<bool> visited(v + 1);
    for (int i = 0; i < v; i++)//Call for every non visited vertex because there can be disconnected graphs also
        if (visited[i] == false)
            dfsOfGraph(adj, i, visited);
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int v = 4;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    dfs(adj, v);

    for (int x : ans)
        cout << x << " ";
    return 0;
}