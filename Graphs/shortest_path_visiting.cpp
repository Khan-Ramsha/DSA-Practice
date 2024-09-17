//Problem no 847
//Level- Hard


// class Solution {
// public:
//     int shortestPathLength(vector<vector<int>>& graph) {
//         int n=graph.size();
//         if(n==1 || n==0) return 0;
//         queue<pair<int,int>> q;
//         set<pair<int,int>> vis;
//         //bfs from all the nodes
//         for(int i=0;i<n;i++){
//             int maskVal= (1 << i);
//             q.push({i,maskVal});
//             vis.insert({i,maskVal});

//         }
//         int allVis=pow(2,n)-1;
//         int path=0;
//         while(!q.empty()){
//             int size=q.size();
//             path++;
//             while(size--){
//                 auto node=q.front();
//                 q.pop();
//                 int currNode=node.first;
//                 int currMask=node.second;
//                 for(int &adj : graph[currNode]){
//                     int mask= currMask | (1<<adj);
//                     if(mask==allVis)
//                     {
//                         return path;
//                     }
//                     if(vis.find({adj,mask})==vis.end()){
//                         vis.insert({adj,mask});
//                         q.push({adj,mask});

//                     }
//                 }
//             }
//         }
//         return -1;

//     }
// };