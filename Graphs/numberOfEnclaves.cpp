
//Leetcode Problem no 1020. Number of Enclaves
//Level - Medium
//using BFS
// class Solution {
// public:
//     int numEnclaves(vector<vector<int>>& grid) {
//         int m=grid.size();
//         int n=grid[0].size();
//         vector<vector<int>> vis(m,vector<int>(n,0));
//         queue<pair<int,int>> q;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(i==0 || j==0 || i == m-1 || j== n-1){
//                     if(grid[i][j]==1){
//                         vis[i][j]=1;
//                         q.push({i,j});
//                     }
//                 }
//             }
//         }
//         int delRow[]={-1,0,+1,0};
//         int delCol[]={0,+1,0,-1};
//         while(!q.empty()){
//             int row=q.front().first;
//             int col=q.front().second;
//             q.pop();
//             for(int i=0;i<4;i++){
//                 int nrow=row+delRow[i];
//                 int ncol=col+delCol[i];
//                 if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && 
//                 vis[nrow][ncol]==0 && grid[nrow][ncol]==1)
//                 {
//                     q.push({nrow,ncol});
//                     vis[nrow][ncol]=1;
//                 }

//             }
            
//         }
//         int count=0;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(grid[i][j]==1 && vis[i][j]==0){
//                     count++;
//                 }
//             }
//         }

//         return count;

//     }
// };

//Using DFS
// class Solution {
// public:
//     void dfs(int x, int y, vector<vector<int>>& vis, vector<vector<int>>& grid, int delrow[], int delcol[]){
//         vis[x][y] = 1;
//         int n = grid.size(), m = grid[0].size();

//         for(int i = 0; i<4; i++){
//             int newx = x+delrow[i];
//             int newy = y+delcol[i];
//             if(newx>=0 && newx<n && newy>=0 && newy<m && !vis[newx][newy] && grid[newx][newy] == 1){
//                 dfs(newx, newy, vis, grid, delrow, delcol);
//             }
//         }
//     }
//     int numEnclaves(vector<vector<int>>& grid) {
//         int n = grid.size(), m = grid[0].size();
//         vector<vector<int>> vis(n, vector<int>(m, 0));

//         int delrow[] = {-1, 0, +1, 0};
//         int delcol[] = {0, +1, 0, -1};

//         for(int j = 0; j<m; j++){
//             if(!vis[0][j] && grid[0][j] == 1){
//                 dfs(0, j, vis, grid, delrow, delcol);
//             }
//             if(!vis[n-1][j] && grid[n-1][j] == 1){
//                 dfs(n-1, j, vis, grid, delrow, delcol);
//             }
//         }
//         for(int i = 0; i<n; i++){
//             if(!vis[i][0] && grid[i][0] == 1){
//                 dfs(i, 0, vis, grid, delrow, delcol);
//             }
//             if(!vis[i][m-1] && grid[i][m-1]){
//                 dfs(i, m-1, vis, grid, delrow, delcol);
//             }
//         }

//         int count = 0;
//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<m; j++){
//                 if(!vis[i][j] && grid[i][j] == 1){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };