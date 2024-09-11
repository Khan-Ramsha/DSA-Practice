//Leetcode porblem no- 130 
//Level- Medium 
//using DFS Traversal 

// class Solution {
// private:
//     void dfs(int row, int col,vector<vector<int>> &vis,vector<vector<char>> &board,
//     int delRow[],int delCol[]){
//         //first task is to mark it visited
//         vis[row][col]=1;
//         int m=board.size();//rows
//         int n=board[0].size();//cols
//         for(int i=0;i<4;i++){
//             int nrow=row+delRow[i];
//             int ncol=col+delCol[i];
//             if(nrow >= 0 && ncol >= 0 && nrow < m && ncol < n && !vis[nrow][ncol] && 
//             board[nrow][ncol] == 'O'){
//                 dfs(nrow,ncol,vis,board,delRow,delCol);
//             }
//         }

//     }
// public:
//     void solve(vector<vector<char>>& board) {
//         int m=board.size();//rows
//         int n=board[0].size();//cols
//         int delRow[]={-1,0,+1,0};
//         int delCol[]={0,+1,0,-1};
//         vector<vector<int>> vis(m,vector<int>(n,0));
//         for(int j=0;j<n;j++)//traverse first and last row
//         {
//             if(!vis[0][j] && board[0][j]=='O')
//             { //for first row
//                 dfs(0,j,vis,board,delRow,delCol);

//             }
//             if(!vis[m-1][j]  && board[m-1][j]=='O')
//             {//last row
//                 dfs(m-1,j,vis,board,delRow,delCol);
//             }
                
//         }
//         for(int i=0;i<m;i++){ //for colums
//             if(!vis[i][0] && board[i][0]=='O')
//             {
//                 dfs(i,0,vis,board,delRow,delCol);
//             }
//             if(!vis[i][n-1] && board[i][n-1]=='O')
//             {
//                 dfs(i,n-1,vis,board,delRow,delCol);
//             }

//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(!vis[i][j] && board[i][j] == 'O'){
//                     board[i][j]='X';
//                 }
//             }
//         }


//     }
// };