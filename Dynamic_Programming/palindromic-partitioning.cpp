//Memoization   
// class Solution{
// public:
//     bool isPalindrome(string str){
//         int start=0;
//         int end=str.size()-1;
//         while(start<end){
//             if(str[start] != str[end]){
//                 return false;
//             }
//             start++;
//             end--;
//         }
//         return true;
//     }
//     int f(string &s,int ind,int n,vector<int> &dp){
//         if(ind == n) return 0;
//         string temp="";
//         int mini=INT_MAX;
//         if(dp[ind] != -1) return dp[ind];
//         for(int j=ind;j<n;j++){
//             temp+=s[j];
//             if(isPalindrome(temp)){
//                 int cost=1+f(s,j+1,n,dp);
//                 mini=min(mini,cost);
//             }
//         }
//         return dp[ind]=mini;
//     }
//     int palindromicPartition(string str)
//     {
//         // code here
//         int n=str.size();
//         vector<int> dp(n,-1);
//         return f(str,0,n,dp)-1;
//     }
// };