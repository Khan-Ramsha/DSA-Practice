// https://leetcode.com/problems/count-ways-to-build-good-strings/
//recursion
class Solution {
public:
    const int MOD = 1e9 + 7;
    int f(int len, int zero, int one){
        if(len == 0) return 1;
        if(len < 0) return 0;
        int sum = f(len - zero, zero, one) + f(len - one, zero, one);
        return sum;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        int ans = 0;
        for(int len = low; len <= high; len++){//as high inclusive
            ans = (ans + f(len , zero, one)) % MOD;
        } 
        return ans;
    }
};
//memo
class Solution {
public:
    const int MOD = 1e9 + 7;
    int f(int len, int zero, int one, vector<int>& dp){
        if(len == 0) return 1;
        if(len < 0) return 0;
        if(dp[len] != -1) return dp[len];
        int sum = f(len - zero, zero, one, dp) + f(len - one, zero, one, dp);
        return dp[len] = sum;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        int ans = 0;
        vector<int> dp(100000, -1);
        for(int len = low; len <= high; len++){//as high inclusive
            ans = (ans + f(len , zero, one, dp)) % MOD;
        } 
        return ans;
    }
};

//Iterative DP
class Solution {
public:
    const int MOD = 1e9 + 7;
    int countGoodStrings(int low, int high, int zero, int one) {
        int ans = 0;
        vector<int> dp(high + 1, 0);
        dp[0] = 1;
        for(int i = 1; i <= high; i++){
            //check if [i - zero] & [i - one] is valid(not neg)
            if(i - zero >= 0 && i - one >= 0) dp[i] = (dp[i - zero] + dp[i - one]) % MOD;
            else{
                if(i - zero >= 0) dp[i] = (dp[i] + dp[i - zero]) % MOD;
                if(i - one >= 0) dp[i] = (dp[i] + dp[i - one]) % MOD;
            }
        }
        for(int len = low; len <= high; len++){
            ans = (ans +  dp[len]) % MOD;
        }
        return ans;
    }
};
