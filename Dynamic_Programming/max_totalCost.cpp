//https://leetcode.com/problems/maximize-total-cost-of-alternating-subarrays/
class Solution {
public:
    long long find(int i, vector<int>& nums, bool flag,vector<vector<long long>>& dp ){
        if(i == nums.size()) return 0;
        long long old = 0;
        if(dp[i][flag] != LLONG_MIN) return dp[i][flag]; 
        if(flag){//if flag is true, sign is +
            old = nums[i] + find(i+1, nums, false, dp);
        }
        else{
            old = (-nums[i]) + find(i + 1, nums, true, dp);
        }
        long long new_val = nums[i] + find(i + 1, nums, false, dp);
        return dp[i][flag] = max(old, new_val);

    }
    long long maximumTotalCost(vector<int>& nums) {
        int n = nums.size();
        //rows = n+1, columns = 2,everyelement is initialized to LLONG_MIN
        vector<vector<long long>> dp(n+1, vector<long long>(2, LLONG_MIN));
        return find(0, nums, true, dp); //ind, nums arr, true flag, dp

    }
};