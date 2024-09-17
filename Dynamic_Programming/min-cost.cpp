//Minimum cost to cut a stick
//Leetcode:  1547. Minimum Cost to Cut a Stick
//Memoization approach
// class Solution {
// public:
//     int f(int ind, int n, vector<int> &cuts,vector<vector<int>> &dp){
//         int result=INT_MAX;
//         if(n-ind < 2) return 0;
//         if(dp[ind][n] != -1) return dp[ind][n];
//         for(int i=ind+1;i<=n-1;i++){
//             int cost=cuts[n]-cuts[ind]+f(ind,i,cuts,dp)+f(i,n,cuts,dp);
//             result=min(result,cost);

//         }
//         return dp[ind][n]=result;
//     }
//     int minCost(int n, vector<int>& cuts) {
//         sort(begin(cuts),end(cuts));
//         cuts.insert(begin(cuts),0);
//         cuts.push_back(n);
//         int m=cuts.size();
//         vector<vector<int>> dp(m,vector<int>(m,-1));

//         return f(0,cuts.size()-1,cuts,dp);
//     }
// };