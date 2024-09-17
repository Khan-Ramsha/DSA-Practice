    // private:
    //     void dfs(int node, vector<int> adj[], stack<int> &st,vector<int> &vis){
    //         vis[node]=1;
    //         for(auto it: adj[node]){
    //             if(!vis[it]){
                    
    //                 dfs(it, adj,st,vis);
                    
    //             }
    //         }
    //         st.push(node);
    //     }
	// public:
	// //Function to return list containing vertices in Topological order. 
	// vector<int> topoSort(int V, vector<int> adj[]) 
	// {
	//     vector<int> vis(V,0);
	//     stack<int> st;
	//     for(int i=0;i<V;i++)
	//     {
	//         if(!vis[i])
	//         {
	        
	//             dfs(i,adj,st,vis);
	//         }
	//       }
	    
	//     vector<int> ans;
	//     while(!st.empty()){
	//         int node=st.top();
	//         st.pop();
	//         ans.push_back(node);
	        
	//     }
	//    return ans;
	    
	// }