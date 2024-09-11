// public:
//     /*  Function to implement Bellman Ford
//     *   edges: vector of vectors which represents the graph
//     *   S: source vertex to start traversing graph with
//     *   V: number of vertices
//     */
//     vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        
//         vector<int> dist(V,1e8);
//         dist[S]=0;
//         for(int i=0;i<V-1;i++)
//         {
//             for(auto it: edges)
//             {
//                 int u=it[0];
//                 int v=it[1];
//                 int w=it[2];
//                 if(dist[u]+w<dist[v] && dist[u]!=1e8)
//                 {
//                     dist[v]=dist[u]+w;
                
//                 }
//             }
//         }
//         //Nth iteration to check the neg cycle
//         for(auto it: edges)
//         {
//             int u=it[0];
//             int v=it[1];
//             int w=it[2];
//             if(dist[u]+w<dist[v] && dist[u]!=1e8)
//             {
//                 return {-1};
//             }
//         }
//         return dist;
        
//     }