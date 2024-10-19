#include <bits/stdc++.h>
using namespace std;
// #define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

vector<int> ans;
vector<vector<int>> scc;

void dfsOfGraph(vector<vector<int>> adj, int source, vector<bool> &visited,int &mn,vector<int> &temp)
{
    mn=min(mn,source);
    temp.push_back(source);
    // cout<<source<<' ';
    visited[source] = true;
    for (int x : adj[source])
        if (visited[x] == false)
            dfsOfGraph(adj, x, visited,mn,temp);
}

void dfs(vector<vector<int>> adj, int v)
{
    vector<bool> visited(v + 1);
    for (int i = 1; i <= v; i++)
    if (visited[i] == false)
    {
        vector<int> temp;
        int mn=INT_MAX;
        dfsOfGraph(adj, i, visited,mn,temp);
        ans.push_back(mn);
        scc.push_back(temp);
    }
}

void runCase()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> adj(n+1);
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt=0;
    dfs(adj,n);
    cout<<scc.size()-1<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
        ans.clear();
    }
    return 0;
}