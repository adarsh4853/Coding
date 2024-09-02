#include <bits/stdc++.h>
using namespace std;

// BFS for graph -> print source vertex then print its friends then print their friends
// Storing levels while bfs gives shortest path for every vertex

// TC -> O(v+E), v = number of vertices, E = number of edges

vector<int> ans;
vector<int> bfsOfGraph(vector<int> adj[], int source, vector<bool> &visited) // s=source node
{
    queue<int> q;
    q.push(source);
    visited[source] = true; // Vertex that has pushed into queue should marked as visited
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : adj[v])
        {
            if (visited[u]==false)
            {
                visited[u] = true;
                q.push(u);
                // distance[u] = distance[v] + 1;
                // parent[u] = v;
            }
        }
    }
    return ans;
}

// Use when source is not given and graphs are not connected
void BFS(vector<int> adj[], int v)
{
    vector<bool> visited(v + 1); // Make a visited array for undirected graph so that we don't print that vertex again
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            bfsOfGraph(adj, i, visited);
        }
    }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int v = 10;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    BFS(adj, v);
    for (int x : ans)
        cout << x << " ";
    return 0;
}