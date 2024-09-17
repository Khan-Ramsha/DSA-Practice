//MEMOIZATION

// class Solution {
// public:
//     int f(int i,int j,string &text1, string &text2,vector<vector<int>> &dp)
//     {
//         if(i < 0 || j < 0 ) return 0;
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         if(text1[i] == text2[j]){
//             return dp[i][j]= 1 + f(i-1,j-1,text1,text2,dp);
//         }
        
//         return dp[i][j]=max(f(i-1,j,text1,text2,dp),f(i,j-1,text1,text2,dp));
        
//     }
//     int longestCommonSubsequence(string text1, string text2) 
//     {
//         int n = text1.size();
//         int m = text2.size();
//         vector<vector<int>> dp(n,vector<int>(m,-1));
//         return f(n-1,m-1,text1,text2,dp);
        
//     }
// };
//space optimization
// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size();
//         int m = text2.size();
        
//         // Ensure the smaller string is used to minimize space usage
//         if (n < m) {
//             swap(text1, text2);
//             swap(n, m);
//         }

//         // Only need space for two rows
//         vector<int> prev(m+1, 0), curr(m+1, 0);
        
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= m; j++) {
//                 if (text1[i-1] == text2[j-1]) {
//                     // If characters match, take diagonal value from prev
//                     curr[j] = 1 + prev[j-1];
//                 } else {
//                     // Otherwise, take the max from the top or left
//                     curr[j] = max(prev[j], curr[j-1]);
//                 }
//             }
//             // Move to the next row: prev becomes curr
//             prev = curr;
//         }
        
//         // The answer is in the last cell of prev
//         return prev[m];
//     }
// };

//tabulation
// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size();
//         int m = text2.size();
        
//         // Create a DP table to store the LCS lengths
//         vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        
//         // Fill the DP table
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= m; j++) {
//                 if (text1[i-1] == text2[j-1]) {
//                     // If the characters match, add 1 to the previous diagonal value
//                     dp[i][j] = 1 + dp[i-1][j-1];
//                 } else {
//                     // Otherwise, take the maximum of the values from the left and top
//                     dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//                 }
//             }
//         }
        
//         // The result is in dp[n][m]
//         return dp[n][m];
//     }
// };
