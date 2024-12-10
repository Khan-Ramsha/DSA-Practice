//Problem Link:- https://leetcode.com/problems/apply-operations-to-an-array/
// class Solution {
// public:
//     vector<int> applyOperations(vector<int>& nums) {
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1] == nums[i]){
//                 nums[i-1]=nums[i-1]*2;
//                 nums[i]=0;
//             }
//         }
//         int ind=0; // logic of move zeros to end
//         for(int j=0;j<nums.size();j++){
//             if(nums[j] != 0){
//                 swap(nums[ind], nums[j]);
//                 ind++;
//             }
//         }
//         return nums;
//     }
// };