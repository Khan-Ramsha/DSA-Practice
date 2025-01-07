//similar to // https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/
https://leetcode.com/problems/number-of-ways-to-split-array/

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<long long> prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        for(int i = 0; i < n - 1; i++){
            long long sum1 = prefixSum[i];
            long long sum2 = prefixSum[n - 1] - prefixSum[i];
            if(sum1 >= sum2) count++;
        }
        return count;
    }
};
class Solution { brute approach
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n - 1; i++){
            int sum1 = 0, sum2 = 0;
            for(int k = 0; k <= i; k++){
                sum1 = sum1 + nums[k];
            }
            for(int k = i + 1; k < n; k++){
                sum2 = sum2 + nums[k];
            }
            if(sum1 >= sum2) count++;
        }
        return count;
    }
};
// firstpart >= secondpart then its valid