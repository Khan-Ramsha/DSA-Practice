//Number of Ways to Form a Target String Given a Dictionary
//https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/description/
//recursion
class Solution {
public:
    const int MOD = 1e9 + 7;
    int f(int i, int j, vector<string>& words, string target, vector<vector<int>>& freq){
        if(j == target.size()) return 1;
        if(i == words[0].size()) return 0;
        long long nottake =  f(i + 1, j, words, target,freq);
        
        long long take = 0;
        if(freq[i][target[j] - 'a'] > 0){
            long long cnt = freq[i][target[j] - 'a'];
            take =  cnt * f(i+1, j+1, words, target, freq) % MOD;
        }
        return  (take + nottake) % MOD;
    }
    int numWays(vector<string>& words, string target) {
        vector<vector<int>> freq(words[0].size(), vector<int> (26, 0));
        for(int i = 0; i < words.size(); i++){
            for(int j = 0 ; j < words[0].size(); j++){
                char c = words[i][j];
                freq[j][c - 'a']++;
            }
        }
        return f(0, 0, words, target,freq);
    }
};
//memo
class Solution {
public:
    const int MOD = 1e9 + 7;
    int f(int i, int j, vector<string>& words, string target, vector<vector<int>>& freq, vector<vector<int>>& dp){
        if(j == target.size()) return 1;
        if(i == words[0].size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        long long nottake =  f(i + 1, j, words, target,freq,dp);
        
        long long take = 0;
        if(freq[i][target[j] - 'a'] > 0){
            long long cnt = freq[i][target[j] - 'a'];
            take =  cnt * f(i+1, j+1, words, target, freq,dp) % MOD;
        }
        return dp[i][j] = (take + nottake) % MOD;
    }
    int numWays(vector<string>& words, string target) {
        vector<vector<int>> freq(words[0].size(), vector<int> (26, 0));
        vector<vector<int>> dp(words[0].size(), vector<int>(target.size(), -1));
        for(int i = 0; i < words.size(); i++){
            for(int j = 0 ; j < words[0].size(); j++){
                char c = words[i][j];
                freq[j][c - 'a']++;
            }
        }
        return f(0, 0, words, target,freq,dp);
    }

};


class Solution {
public:
    const int MOD = 1e9 + 7;
    long f(int i, int j, vector<string>& words, string target, vector<vector<int>>& freq, vector<vector<int>>& dp){
        if(j == target.size()) return 1;
        if(i == words[0].size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        long count = 0;
        count +=  f(i + 1, j, words, target,freq,dp);
        
        long long take = 0;
        if(freq[i][target[j] - 'a'] > 0){
            long long cnt = freq[i][target[j] - 'a'];
            count +=  cnt * f(i+1, j+1, words, target, freq,dp) % MOD;
        }
        return dp[i][j] = (count) % MOD;
    }
    int numWays(vector<string>& words, string target) {
        vector<vector<int>> freq(words[0].size(), vector<int> (26, 0));
        vector<vector<int>> dp(words[0].size(), vector<int>(target.size(), -1));
        for(int i = 0; i < words.size(); i++){
            for(int j = 0 ; j < words[0].size(); j++){
                char c = words[i][j];
                freq[j][c - 'a']++;
            }
        }
        return f(0, 0, words, target,freq,dp);
    }
};


// Tabulation
class Solution {
public:
    const int MOD = 1e9 + 7;
    int numWays(vector<string>& words, string target) {
        int n = words[0].size();
        int m = target.size();
        vector<vector<int>> freq(words[0].size(), vector<int> (26, 0));
        vector<vector<long>> dp(words[0].size() + 1, vector<long>(target.size() + 1, 0));
        for(int i = 0; i < words.size(); i++){
            for(int j = 0 ; j < words[0].size(); j++){
                char c = words[i][j];
                freq[j][c - 'a']++;
            }
        }
        for(int i = 0; i <= n; i++){
            dp[i][m] = 1;//there is exactly one way by doing nothing
        }
        //filling the DP array manually
        for(int i = n - 1; i >= 0; i--){
            for(int j = m - 1; j >= 0; j--){
                //skipp the character words[i] , move to next
                dp[i][j] = dp[i+1][j]; //stick to target[j] and move to next character in words[i];
                if(freq[i][target[j] - 'a'] > 0){
                    long long cnt = freq[i][target[j] - 'a'];
                    dp[i][j] = (dp[i][j] + cnt * dp[i+1][j+1]) % MOD;
                }
            }
        }
        return dp[0][0];
    }
};