#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj, int s, vector<int> &st, vector<bool> &visited, vector<int> adjRev[])
{
    visited[s] = true;
    for (auto i : adj[s])
    {
        if (!visited[i])
        {
            dfs(adj, i, st, visited, adjRev);
        }
    }
    st.push_back(s);
}

vector<int> topoSort(vector<vector<int>> &adj, int V, vector<int> adjRev[])
{
    vector<int> st;
    vector<bool> visited(V);
    for (int u = 0; u < V; u++)
    {
        if (!visited[u])
        {
            dfs(adj, u, st, visited, adjRev);
        }
    }
    reverse(st.begin(), st.end());
    return st;
}

void dfsNorm(vector<int> adj[], int s, vector<int> &temp, vector<bool> &visited)
{
    temp.push_back(s);
    visited[s] = true;
    for (auto i : adj[s])
    {
        if (!visited[i])
        {
            dfsNorm(adj, i, temp, visited);
        }
    }
}

void dfsOnRev(vector<int> adj[], int V, vector<vector<int>> &ans, vector<int> &order)
{
    vector<bool> visited(V);
    for (auto &i : order)
    {
        if (!visited[i])
        {
            vector<int> temp;
            dfsNorm(adj, i, temp, visited);
            ans.push_back(temp);
        }
    }
}

vector<vector<int>> SCC(vector<vector<int>> &adj, int V)
{
    // Step - 1 = Order the vertices in decreasing order of finish times in dfs
    // Step - 2 = Reverse all the edges
    // Step - 3 = Apply dfs for sources in order from step 1 on reversed Graph
    vector<int> adjRev[V];
    vector<int> order = topoSort(adj, V, adjRev);

    for (int i = 0; i < V; i++)
    {
        for (auto z : adj[i])
        {
            adjRev[z].push_back(i);
        }
    }
    vector<vector<int>> ans;
    dfsOnRev(adjRev, V, ans, order);
    return ans;
}

int kosaraju(int V, vector<vector<int>> &adj)
{
    vector<vector<int>> ans = SCC(adj, V);
    return ans.size();
}

// void tp(int i, vector<vector<int>> &adj, stack<int> &s, vector<bool> &visited)
// {
//     visited[i] = true;
//     for (auto z : adj[i])
//     {
//         if (!visited[z])
//             tp(z, adj, s, visited);
//     }

//     s.push(i);
//     return;
// }

// void fun(int i, vector<int> new_adj[], vector<bool> &vis)
// {
//     vis[i] = true;
//     for (auto x : new_adj[i])
//     {
//         if (!vis[x])
//             fun(x, new_adj, vis);
//     }
//     return;
// }

// int kosaraju(int V, vector<vector<int>> &adj)
// {
//     // code here
//     stack<int> s;
//     vector<bool> visited(V, false);
//     for (int i = 0; i < V; i++)
//     {
//         if (!visited[i])
//             tp(i, adj, s, visited);
//     }
//     vector<int> ans;
//     while (!s.empty())
//     {
//         ans.push_back(s.top());
//         s.pop();
//     }

//     // ulta adj
//     vector<int> new_adj[V];

//     for (int i = 0; i < V; i++)
//     {
//         for (auto z : adj[i])
//         {
//             new_adj[z].push_back(i);
//         }
//     }

//     // tp ka dfs

//     int res = 0;
//     vector<bool> vis(V, false);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         if (!vis[ans[i]])
//         {
//             res++;
//             fun(ans[i], new_adj, vis);
//         }
//     }

//     return res;
// }

int main()
{

    return 0;
}