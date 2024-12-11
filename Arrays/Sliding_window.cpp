//https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/
// class Solution {
// public:
//     int maximumBeauty(vector<int>& nums, int k) {
//         //sort the array
//         sort(nums.begin(), nums.end());
//         //max subarray such that: A[j] - A[i] ≤ 2 * k.
//         int right = 0;
//         int maxLen = 0;
//         for(int left = 0; left < nums.size(); left++){
//             while(right < nums.size() && nums[right] - nums[left] <= 2*k)
//             {
//                 right++;
//             }
//             maxLen = max(maxLen, right - left);
//         }
//         return maxLen;
//     }
// };

// class Solution {
// public:
//     int maximumBeauty(vector<int>& nums, int k) {
//         //sort the array
//         sort(nums.begin(), nums.end());
//         //max subarray such that: A[j] - A[i] ≤ 2 * k.
//         int right = 0, left = 0;
//         int maxLen = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(right < nums.size() && left < nums.size() && nums[right] - nums[left] <= 2*k)
//             {
//                 right++;
//             }
//             else{
//                 left++;
//             }
//             maxLen = max(maxLen, right - left);
//         }
//         return maxLen;
//     }
// };
//could be solved using prefix Sum too