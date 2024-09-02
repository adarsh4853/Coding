#include <bits/stdc++.h>
using namespace std;

bool topologicalSorting(vector<int> adj[], vector<int> &indegree, int numCourses)
{
    queue<int> q;
    for (int i = 0; i < numCourses; ++i)
        if (indegree[i] == 0)
            q.push(i);
    
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int u : adj[x])
        {
            indegree[u]--;
            if (indegree[u] == 0) q.push(u);
        }
    }
    for (int i = 0; i < numCourses; ++i)
        if (indegree[i] != 0)
            return false;
    return true;
}

bool func(int numCourses, vector<vector<int>> &pq)
{
    vector<int> indegree(numCourses);
    vector<int> adj[numCourses];
    for (int i = 0; i < pq.size(); ++i)
        addEdge(adj, pq[i][1], pq[i][0], indegree);
    return topologicalSorting(adj, indegree, numCourses);
}


void addEdge(vector<int> adj[], int u, int v, vector<int> &indegree)
{
    adj[u].push_back(v);
    indegree[v]++;
}
int main()
{

    return 0;
}