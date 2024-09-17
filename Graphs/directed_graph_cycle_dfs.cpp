// bool checkCycle(int i,vector<int> adj[],int vis[],int dfsvis[]){
//     vis[i]=1;
//     dfsvis[i]=1;
//     for (auto it : adj[i])
//     {
//         /* code */
//         if(checkCycle(it,adj,vis,dfsvis)) return true;
//         else if(dfsvis[it]) return true;

//     }
//     dfsvis[i]=0;
//     return false;
    
// }
// bool cycle(int N,vector<int> adj[]){

//     int vis[N]={0};
//     int dfsvis[N]={0};
//     for(int i=0;i<N;i++){
//         if(checkCycle(i,adj,vis,dfsvis)) 
//             return true;
//     }

// }