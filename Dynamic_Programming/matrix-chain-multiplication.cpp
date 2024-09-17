//recursive approach
// class Solution{
// public:
//     int f(int i, int j, int arr[]){
//         //base case
//         if(i == j) return 0;
//         int mini=1e9;
//         for(int k = i; k<j;k++){
//             int steps=arr[i-1] * arr[k] * arr[j] + f(i,k,arr) + f(k+1,j,arr);
//             if(steps<mini){
//                 mini=steps;
//             }
//         }
//         return mini;
        
//     }
//     int matrixMultiplication(int N, int arr[])
//     {
//         // code here
//         return f(1,N-1,arr);
//     }
// };

//Memoization
// class Solution{
// public:
//     int f(int i, int j, int arr[],vector<vector<int>> &dp){
//         //base case
//         if(i == j) return 0;
//         int mini=1e9;
//         if(dp[i][j]!=-1) return dp[i][j];
//         for(int k = i; k<j;k++){
//             int steps=arr[i-1] * arr[k] * arr[j] + f(i,k,arr,dp) + f(k+1,j,arr,dp);
//             if(steps<mini){
//                 mini=steps;
//             }
//         }
//         return dp[i][j]=mini;
        
//     }
//     int matrixMultiplication(int N, int arr[])
//     {
//         vector<vector<int>> dp(N,vector<int>(N,-1));
//         return f(1,N-1,arr,dp);
//     }
// };