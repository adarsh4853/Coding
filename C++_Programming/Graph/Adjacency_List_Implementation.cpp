#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<" "<<i<<" -> ";
        for(int x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<'\n';
    }
}

int main()
{
    int v=4;//Number of nodes
    vector<int> adj[v]; 
    addEdge(adj,0,1);// 0 -> 1 - 2
    addEdge(adj,0,2);// 1 -> 0 - 2 - 3
    addEdge(adj,1,2);// 2 -> 0 - 1
    addEdge(adj,1,3);// 3 -> 1
    printGraph(adj,v);
    //0 - 1 - 3
    // \ /
    //  2
    return 0;
}