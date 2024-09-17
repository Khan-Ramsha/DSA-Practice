//problem link-https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
// class Solution 
// {
//   private:
//     void solve(int i, int j, string move, vector<string> &ans,
//     vector<vector<int>> &vis, vector<vector<int>> &mat, int di[], int dj[], int n)
//     {
//         if (i == n - 1 && j == n - 1) {  // If destination is reached
//             ans.push_back(move);
//             return;
//         }

//         string dir = "DLRU";  // Directions: Down, Left, Right, Up
//         for (int k = 0; k < 4; k++) {
//             int ni = i + di[k];  // Next row index
//             int nj = j + dj[k];  // Next column index
//             if (ni >= 0 && ni < n && nj >= 0 && nj < n && mat[ni][nj] == 1 && !vis[ni][nj]) {
//                 vis[ni][nj] = 1;  // Mark the next cell as visited
//                 solve(ni, nj, move + dir[k], ans, vis, mat, di, dj, n);  // Recur for the next cell
//                 vis[ni][nj] = 0;  // Backtrack (unmark the visited cell)
//             }
//         }
//     }

//   public:
//     vector<string> findPath(vector<vector<int>> &mat) 
//     {
//         int n = mat.size();  // Size of the matrix
//         vector<string> ans;  // To store all possible paths

//         // If the start or the destination cell is blocked, return no path
//         if (mat[0][0] == 0 || mat[n - 1][n - 1] == 0) return ans;

//         vector<vector<int>> vis(n, vector<int>(n, 0));  // Visited matrix
//         int di[] = {+1, 0, 0, -1};  // Directions for row movement: D, L, R, U
//         int dj[] = {0, -1, +1, 0};  // Directions for column movement: D, L, R, U

//         vis[0][0] = 1;  // Mark the starting cell as visited
//         solve(0, 0, "", ans, vis, mat, di, dj, n);  // Start solving

//         return ans;
//     }
    
    
// };