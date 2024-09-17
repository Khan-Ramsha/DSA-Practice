// void dfs(int i, map<int,vector<int>> &mp,vector<int> &vis,vector<vector<int>> &astronaut,long long &temp )
// {
//     vis[i]=1; 
//     temp++;
//     for(auto i: mp[i]){
//         if(!vis[i]){
//             vis[i]=1;
//             dfs(i,mp,vis,astronaut,temp);
//         }
//     }
// }
// int journeyToMoon(int n, vector<vector<int>> astronaut) {
//     vector<int> vis(n,0);
//     map<int,vector<int>> mp;
//     for(auto a: astronaut){
//         mp[a[0]].push_back(a[1]);
//         mp[a[1]].push_back(a[0]);
        
//     }
//     long long ans=0;
//     for(int i=0;i<n;i++){
//         if(!vis[i]){
//             long long temp=0;
//             dfs(i,mp,vis,astronaut,temp);
//             ans=ans+temp*(n-temp);
//         }
        
//     }
//     return ans/2;

// }
