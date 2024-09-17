//Memoization approach!!
// class Solution {
// public:
//     bool f(int i,string s,set<string> st,vector<int> &dp){
//         if(i==s.size()) return true;
//         string temp;
//         if(dp[i] != -1) return dp[i];
//         for(int k=i;k<s.size();k++){
//             temp+=s[k];
//             if(st.find(temp) != st.end()){
//                 if(f(k+1,s,st,dp)) return dp[i]=true;
//             }
//         }
//         return dp[i]=false;
//     }
//     bool wordBreak(string s, vector<string>& wordDict) {
//         set<string> st;
//         vector<int> dp(s.size(),-1);
//         for(auto it: wordDict){
//             st.insert(it);
//         }
//         return f(0,s,st,dp);
//     }
// };