
//Porblem Link:- https://www.geeksforgeeks.org/problems/alien-dictionary/1
// class Solution {
// private:
//     void dfs(int node, vector<int> adj[], stack<int> &st,vector<int> &vis){
//             vis[node]=1;
//             for(auto it: adj[node]){
//                 if(!vis[it]){
                    
//                     dfs(it, adj,st,vis);
                    
//                 }
//             }
//             st.push(node);
//         }

// 	//Function to return list containing vertices in Topological order. 
// 	vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
// 	    vector<int> vis(V,0);
// 	    stack<int> st;
// 	    for(int i=0;i<V;i++)
// 	    {
// 	        if(!vis[i])
// 	        {
	        
// 	            dfs(i,adj,st,vis);
// 	        }
// 	      }
	    
// 	    vector<int> ans;
// 	    while(!st.empty()){
// 	        int node=st.top();
// 	        st.pop();
// 	        ans.push_back(node);
	        
// 	    }
// 	   return ans;
	    
// 	}
// public:
//     string findOrder(string dict[], int n, int k) {
//         vector<int> adj[k];
//         for(int i=0;i<n-1;i++){
//             string s1=dict[i];
//             string s2=dict[i+1];
//             int len=min(s1.size(),s2.size());
//             for(int ptr=0;ptr<len;ptr++){
//                 if(s1[ptr] != s2[ptr]){
//                     adj[s1[ptr]-'a'].push_back(s2[ptr]-'a');
//                     break;
//                 }
//             }
//         }
//         vector<int> topo=topoSort(k,adj);
//         string ans="";
//         for(auto it: topo){
//             ans+=char(it +'a');
//         }
//         return ans;
//     }
// };