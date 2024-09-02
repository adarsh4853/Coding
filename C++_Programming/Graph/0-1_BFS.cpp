#include <bits/stdc++.h>
using namespace std;
const int INF=1e9+5;

//See luv video description for articles and questions
//Multiple source BFS

vector<int> BFS(vector<pair<int,int>> adj[], int V, vector<bool> &visited,int s=0) // s=source node
{
    vector<int> d(V, INF);
    d[s] = 0;
    deque<int> q;
    q.push_front(s);
    while (!q.empty())
    {
        int v = q.front();
        cout<<q.front()<<' ';
        q.pop_front();
        for (auto edge : adj[v])
        {
            int u = edge.first;
            int w = edge.second;
            if (d[v] + w < d[u])//check whether this time edge weight is 0 or not if it was 1 last time
            {
                d[u] = d[v] + w;
                if (w == 1)
                    q.push_back(u);
                else
                    q.push_front(u);
            }
        }
    }
}

//         1    2
//       1/ \1 /0  //after reaching to 4 from node 1 with edge of weight 1, we also have to check whether we can reach to 4 from 0 weight edge through same level of nodes as 1 
//       3    4     //hence we cant use visited array here
void addEdge(vector<pair<int,int>> adj[], int u, int v)
{
    adj[u].push_back({v,0});
    adj[v].push_back({u,0});
}

int main()
{
    int V = 10;
    vector<pair<int,int>> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    vector<bool> visited(V);
    BFS(adj, V,visited);
    
    return 0;
}