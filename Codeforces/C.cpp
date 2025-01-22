#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

struct DSU {
    vector<int> par, rnk, sz;
    int c;
    DSU(int n) : par(n + 1), rnk(n + 1, 0), sz(n + 1, 1), c(n) {
        for (int i = 1; i <= n; ++i) par[i] = i;
    }
    int find(int i) {
        return (par[i] == i ? i : (par[i] = find(par[i])));
    }
    bool same(int i, int j) {
        return find(i) == find(j);
    }
    int get_size(int i) {
        return sz[find(i)];
    }
    int count() {
        return c; // connected components
    }
    int join(int i, int j) {
        if ((i = find(i)) == (j = find(j)))
            return -1;
        else
            --c;
        if (rnk[i] > rnk[j]) swap(i, j);
        par[i] = j;
        sz[j] += sz[i];
        if (rnk[i] == rnk[j]) rnk[j]++;
        return j;
    }
};

int dfs(vector<vector<int>> &adj,int i,vector<bool> &vis,vector<int> &ans)
{
    vis[i]=true;
    for(auto &u:adj[i])
    {
        if(!vis[u])
        {
            ans[u]=!ans[i];
            int val=dfs(adj,u,vis,ans);
            if(val==-1) return -1;
        }
        else if(ans[u]==ans[i])
        {
            return -1;
        }
    }
    return 1;
}

void runCase(int &testcase)
{
    int n,m,val;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<bool> vis(n+1);
    vector<int> ans(n+1,-1);
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            ans[i]=1;
            vis[i]=1;
            val=dfs(adj,i,vis,ans);
        }
    }
    if(val==-1)
    {
        cout<<"IMPOSSIBLE"<<'\n';
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(ans[i]==1) cout<<1<<' ';
        else cout<<2<<' ';
    }
    cout<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "Case #" << i << ": \n";
        runCase(i);
    }
    return 0;
}