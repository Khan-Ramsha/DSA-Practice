//implementing SSC using Kosaraju's algorithm

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int start,stack<int> &st,vector<int> &vis,vector<int> adj[]){
    vis[start]=1;
    for(auto it: adj[start]){
        if(!vis[it]){
            dfs(it,st,vis,adj);

        }
    }
    st.push(start);

}
void revDFS(int node,vector<int> &vis,vector<int> transpose[]){
    cout<<node<<" ";
    vis[node]=1;
    for(auto it: transpose[node])
    {
        revDFS(it, vis, transpose);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++) // directed graph
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);

    }
    stack<int> st;
    vector<int> vis(n,0);
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            dfs(i,st,vis,adj);
        }
    }
    vector<int> transpose[n];
    for(int i=0;i<n;i++){
        vis[i]=0;
        for(auto it:adj[i]){
            transpose[it].push_back(i);

        }
    }    
    while(!st.empty()){
        int node=st.top();
        st.pop();
        if(!vis[node]){
            cout<<"SSC:"<<" ";
            revDFS(node,vis,transpose);

        }
    }
    

}