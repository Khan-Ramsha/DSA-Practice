// bool isCycle(int V,vector<int> adj){
//     int indegree[V]={0};
//     for (int i = 0; i < V; i++)
//     {
//         /* code */
//         for(auto it:adj[i]){
//             indegree[i]++;
//         }
//     }
//     queue<int> q;
//     for (int i = 0; i < V; i++)
//     {
//         /* code */
//         if(indegree[i]==0){
//             q.push(i);
//         }
//     }
//     vector<int> topo;
//     int cnt=0;
//     while (!q.empty())
//     {
//         /* code */
//         int node=q.front();
//         q.pop();
//         // topo.push_back(node); c
//         cnt++;
//         for(auto it:adj[node]){
//             indegree[it]--;
//             if(indegree[it]==0) q.push(it);

//         }
//     }
//     if(cnt==V) return false;
//     return true;

    
    
    
// }