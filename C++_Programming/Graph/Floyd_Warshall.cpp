#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9+10;

int main()
{
    int V,E;
    cin>>V>>E;
    vector<vector<int>> dist(V,vector<int>(V));
    for(int i=0;i<=V;i++)
    {
        for(int j=0;j<=V;j++)
        {
            if(i==j) dist[i][j]=0;
            else dist[i][j]=INF;
        }
    }
    for(int i=0;i<E;i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        dist[x][y]=wt;
    }

    for(int k=1;k<=V;k++)
    {
        for(int i=1;i<=V;i++)
        {
            for(int j=1;j<=V;j++)
            {
                if(dist[i][k]!=INF && dist[k][j]!=INF) //For negative weights
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }

    return 0;
}