// https://leetcode.com/problems/target-sum/
//recursion
class Solution {
public:
    int count = 0;
    void find(vector<int>& nums, int ind, int sum , int target){
        if(ind == nums.size()){
            if(sum == target){
                count++;
            }
        }
        else{
            find(nums, ind+1, sum + nums[ind], target);
            find(nums, ind+1, sum - nums[ind], target);
        }
    }
    int findTargetSumWays(vector<int>& nums, int target) {
    
        find(nums, 0, 0, target);
        return count;
    }
};