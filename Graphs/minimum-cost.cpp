//Leetcode problem no: 1584
//Level- Medium

// class Solution {
// public:
//      int primsAlgo(int V, vector<vector<pair<int,int>>> &adj)
//     {
//         priority_queue<pair<int,int>,vector<pair<int,int>>,     greater<pair<int,int>>> pq;
//         vector<int> vis(V,0);
//         pq.push({0,0});
//         int sum=0;
//         while(!pq.empty())
//         {
//             auto it=pq.top();
//             pq.pop();
//             int node=it.second;
//             int wt=it.first;
//             if(vis[node]==1) continue;
//             vis[node]=1;
//             sum+=wt;
//             for(auto it:adj[node]){
//                 int adjnode=it.first;
//                 int ewt=it.second;
//                 if(!vis[adjnode]) pq.push({ewt,adjnode});
//             }
        
       
//         }
        
//         return sum;
     
//     }
//     int minCostConnectPoints(vector<vector<int>>& points) {
//         int n= points.size();
//         vector<vector<pair<int,int>>> adj(n);
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int x1=points[i][0];
//                 int y1=points[i][1];
//                 int x2=points[j][0];
//                 int y2=points[j][1];
//                 int dist=abs(x1-x2) + abs(y1-y2);
//                 adj[i].push_back({j,dist});
//                 adj[j].push_back({i,dist});
//             }
//         }
//         return primsAlgo(n,adj);
        
//     }
// };