#include <bits/stdc++.h>
using namespace std;

//Undirected
void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void addEdgeWeighted(vector<pair<int,int>> adj[],int u,int v,int wt)
{
    adj[u].push_back({v,wt});
    adj[v].push_back({u,wt});
}

//Directed
void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
}

void addEdgeWeighted(vector<pair<int,int>> adj[],int u,int v,int wt)
{
    adj[u].push_back({v,wt});
}

//Check if there is edge from u to v
bool checkEdge(vector<int> adj[],int u,int v)//O(n) TC
{
    for(int x:adj[u])//pair<int,int>
    {
        if(x==v)//x.first==v
        {
            //connected //return x.second for getting weight
            return true;
        }
    }
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
    vector<int> adj[v];//use pair<int,int> for wighted graphs {vertex,weight}.
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