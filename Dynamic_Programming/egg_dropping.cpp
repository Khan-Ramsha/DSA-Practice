//Problem Link: https://www.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1
// Recursive Approach
// class Solution
// {
//     public:
//     //Function to find minimum number of attempts needed in 
//     //order to find the critical floor.
//     int f(int n, int k){
//         if(k==0 || k==1) return k;
//         if(n==1) return k;
//         int mini=INT_MAX;
//         for(int i=1;i<=k;i++){
//             int temp=1+max(f(n-1,i-1),f(n,k-i));
//              mini=min(mini,temp);
//         }
//         return mini;
       
//     }
//     int eggDrop(int n, int k) 
    
//     {
//         return f(n,k);
//     }
// };
//Memoization
// class Solution
// {
//     public:
//     //Function to find minimum number of attempts needed in 
//     //order to find the critical floor.
//     int f(int n, int k,vector<vector<int>> &dp){
//         if(k==0 || k==1) return k;
//         if(n==1) return k;
//         if(dp[n][k] != -1) return dp[n][k];
//         int mini=INT_MAX;
//         for(int i=1;i<=k;i++){
//             int temp=1+max(f(n-1,i-1,dp),f(n,k-i,dp));
//              mini=min(mini,temp);
//         }
//         return dp[n][k]=mini;
       
//     }
//     int eggDrop(int n, int k) 
    
//     {
//         vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
//         return f(n,k,dp);
//     }
// };