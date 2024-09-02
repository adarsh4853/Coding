#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> adj,int u,int v)
{
    adj[u][v]=1;//use weight instead of 1 in case of weighted graph
    adj[v][u]=1;
}
void addEdgeDirected(vector<vector<int>> adj,int u,int v)
{
    adj[u][v]=1;//use weight instead of 1 in case of weighted graph
}

bool checkEdge(vector<vector<int>> adj,int u,int v)
{
    if(adj[u][v]==1)//adj[u][v]>0 for weighted
    {
        //connected
        return true;
    }
}

int main()
{
    int v;//Number of vertices
    cin>>v;
    vector<vector<int>> adjMat(v+1,vector<int>(v+1));
    return 0;
}