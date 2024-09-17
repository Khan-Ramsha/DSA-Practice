// class Solution {
// public:
//     int getAns(int ind,int prev,vector<vector<int>> &dp,int n,  vector<int>& nums){
//         if(ind==n) return 0;
//         if(dp[ind][prev+1]!=-1){
//             return dp[ind][prev+1];
//         }
//         int take=0;
//         int nottake=0+getAns(ind+1,prev,dp,n,nums);
//         if(prev==-1 || nums[ind]>nums[prev]){
//             take=1+getAns(ind+1,ind,dp,n,nums);
//         }
//         return dp[ind][prev+1]=max(take,nottake);
//     }

//     int lengthOfLIS(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>> dp(n,vector<int>(n+1,-1));
//         return getAns(0,-1,dp,n,nums);
//     }
// };

// space optimization
// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 0) return 0;

//         // Create a dp array where dp[i] stores the length of the LIS ending at index i
//         vector<int> dp(n, 1);  // Initialize all dp values to 1, since every element is a subsequence by itself

//         // Loop through each element
//         for (int i = 1; i < n; i++) {
//             for (int j = 0; j < i; j++) {
//                 if (nums[i] > nums[j]) {
//                     dp[i] = max(dp[i], dp[j] + 1);  // Update dp[i] to reflect the longest subsequence ending at i
//                 }
//             }
//         }

//         // The answer is the maximum value in dp array
//         return *max_element(dp.begin(), dp.end());
//     }
// };
