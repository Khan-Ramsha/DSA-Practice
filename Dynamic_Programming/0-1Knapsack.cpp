//memoization technique
// int f(int ind, int W, vector<int> &values, vector<int> &weights,
//       vector<vector<int>> &dp) {
// 		  if(ind == 0){
// 			  if(weights[0] <= W) return values[0];
// 			  return 0; 
// 		  }
// 		  if(dp[ind][W]!=-1) return dp[ind][W];
// 		  int notTake=0+f(ind-1,W,values,weights,dp);
// 		  int take=0;
// 		  if(weights[ind] <= W){
// 			  take=values[ind] + f(ind-1,W-weights[ind],values,weights,dp);
// 		  }
// 		  return dp[ind][W]=max(take,notTake);
// 	  }
// int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
// {
// 	// Write your code here
// 	vector<vector<int>> dp(n,vector<int>(w+1,-1));
// 	return f(n-1,w,values,weights,dp);

// }

//Tabulation
// int maxProfit(vector<int> &values, vector<int> &weights, int n, int w) 
// {
//     // Create a 2D DP array to store results of subproblems
//     vector<vector<int>> dp(n, vector<int>(w + 1, 0));

//     // Initialize the dp array for the 0th item (base case)
//     for (int W = weights[0]; W <= w; W++) {
//         dp[0][W] = values[0];
//     }

//     // Build the dp array
//     for (int ind = 1; ind < n; ind++) { // Loop through items (1 to n-1)
//         for (int W = 0; W <= w; W++) {  // Loop through weight capacity (0 to w)
//             int notTake = 0 + dp[ind - 1][W];  // Option to not take the item
//             int take = 0;

//             // Option to take the item if weight allows
//             if (weights[ind] <= W) {
//                 take = values[ind] + dp[ind - 1][W - weights[ind]];
//             }

//             // Store the maximum of taking or not taking the item
//             dp[ind][W] = max(take, notTake);
//         }
//     }

//     // The final result will be in dp[n-1][w], representing the max value for n items and max weight w
//     return dp[n - 1][w];
// }

//Space optimization
// int maxProfit(vector<int> &values, vector<int> &weights, int n, int w) 
// {
//     // Create a 2D DP array to store results of subproblems
// 	vector<int> prev(w+1,0),curr(w+1,0);
// 	    // Initialize the dp array for the 0th item (base case)
//     for (int W = weights[0]; W <= w; W++) {
//         prev[W] = values[0];
//     }

//     // Build the dp array
//     for (int ind = 1; ind < n; ind++) { // Loop through items (1 to n-1)
//         for (int W = 0; W <= w; W++) {  // Loop through weight capacity (0 to w)
//             int notTake = 0 + prev[W];  // Option to not take the item
//             int take = 0;

//             // Option to take the item if weight allows
//             if (weights[ind] <= W) {
//                 take = values[ind] + prev[W - weights[ind]];
//             }

//             // Store the maximum of taking or not taking the item
//             curr[W] = max(take, notTake);

//         }
// 		prev=curr;
//     }

//     // The final result will be in dp[n-1][w], representing the max value for n items and max weight w
//     return prev[w];
// }
//More optimized
// int maxProfit(vector<int> &values, vector<int> &weights, int n, int w) 
// {
// 	vector<int> prev(w+1,0);
//     for (int W = weights[0]; W <= w; W++) {
//         prev[W] = values[0];
//     }

//     for (int ind = 1; ind < n; ind++) { 
//         for (int W = w; W >= 0 ; W--) { 
//             int notTake = 0 + prev[W];  
//             int take = 0;

//             if (weights[ind] <= W) {
//                 take = values[ind] + prev[W - weights[ind]];
//             }
//             prev[W] = max(take, notTake);

//         }
	
//     }

//     return prev[w];
// }
