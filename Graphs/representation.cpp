#include <iostream>
#include <vector>
using namespace std;
int main()
{// graph stored here- adjancency matrix
    // int n,m;
    
    // cin>>n>>m;
    // int adj[n-1][m-1];
    // for(int i=0;i<m;i++){ // TC-O(m)
    //     int u,v,w;
    //     cin>>u>>v>>w;
    //     adj[u][v]=w;
    //     adj[v][u]=w;
    // }
    // adjacenct list(array)
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        

    }
    // return 0;
}


