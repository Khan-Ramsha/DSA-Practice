// private:
//     void dfs(int node,vector<int> adj[],int vis[],vector<int> &ans){
//         vis[node]=1;
//         ans.push_back(node);
//         for(auto it: adj[node]){
//             if(!vis[it]){
//                 dfs(it,adj,vis,ans);

//             }
//         }
//     }
// public:
//     vector<int> dfsOfGraph(int N, vector<int> adj){
//         int vis[N]={0};
//         vector<int> ans;
//         int start=0;
//         dfs(start,adj,vis,ans);
//         return ans;
//     }

