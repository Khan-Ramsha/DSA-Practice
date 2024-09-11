//breadth first search technique
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> bfs(int V,vector<int> adj[]){
    int vis[V]={0};
    vis[0]=1;
    queue<int> q;
    vector<int> bfs; //result
    q.push(0);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node])
        {
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    

    }
//time complexity-O(N)+O(2E)
//Space comoplexity-O(N)
    return bfs;
}

int main()
{
    int V=5;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    // Perform BFS traversal
    vector<int> bfsTraversal = bfs(V, adj);

    // Print BFS result
    for (int node : bfsTraversal) {
        cout << node << " ";
    }

}