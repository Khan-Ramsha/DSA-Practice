//Leetcode problem number- 733
// class Solution {
// private:
//     void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int delRow[],int delCol[],int iniColor,int color){
//         ans[row][col]=color;
//         int m=image.size();
//         int n=image[0].size();
//         for(int i=0;i<4;i++){
//             int nrow=row + delRow[i];
//             int ncol=col + delCol[i];
//             if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && 
//             image[nrow][ncol] == iniColor && 
//             image[nrow][ncol] != color){
//                 dfs(nrow,ncol,ans,image,delRow,delCol,iniColor,color);
//             }
//         }
//     }
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int iniColor=image[sr][sc];
//         vector<vector<int>>& ans=image;

//         int delRow[]={-1,0,+1,0};
//         int delCol[]={0,+1,0,-1};
//         dfs(sr,sc,ans,image,delRow,delCol,iniColor,color);
//         return ans;
//     }
// };