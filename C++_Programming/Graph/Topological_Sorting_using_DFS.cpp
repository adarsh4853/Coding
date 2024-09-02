#include <bits/stdc++.h>
using namespace std;

//Doesn't work in case of cycles 

void topoDFS(vector<int> adj[], vector<bool> &visited, vector<int> &ans, int src)
{
    visited[src] = true;
    for (int i : adj[src])
    {
        if (visited[i] == false)
        {
            topoDFS(adj, visited, ans, i);
        }
    }
    ans.push_back(src);
}

void topologicalSorting(vector<int> adj[], int v, vector<int> &ans)
{
    vector<bool> visited(v);
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            topoDFS(adj, visited, ans, i);
        }
    }
}

void addEdge(vector<int> adj[], int u, int v) { adj[u].push_back(v); }

vector<int> findOrder(int numCourses, vector<vector<int>> &pq)
{
    vector<int> adj[numCourses];
    vector<int> ans;
    for (int i = 0; i < pq.size(); ++i)
        addEdge(adj, pq[i][1], pq[i][0]);
    topologicalSorting(adj, numCourses, ans);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}