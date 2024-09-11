	
	// //Function to find the shortest distance of all the vertices
    // //from the source vertex S.
    // vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) //vertex,adjacencylist,source is given 
    // {
    //     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    //     vector<int> distance(V,INT_MAX);
    //     distance[S]=0;
    //     pq.push({0,S});//in the form {dist,node/vertex}
    //     while(!pq.empty()){
    //         int node=pq.top().second;
    //         pq.pop();
    //         for(auto it: adj[node]){
    //             int v=it[0];
    //             int w=it[1];
    //             if(distance[node]+w<distance[v]){
    //                 distance[v]=distance[node]+w;
    //                 pq.push({distance[v],v});
    //             }
                
    //         }
    //         return distance;
    //     }
    // }
    //when the graph has negative edges dijstras algo fails
    //for negative cycle it leads to TLE, keeps on running forever
    // /bellman ford helps u to detect negative cycle
    //bellman ford works for directed graphs
    //N-1 iterations required   