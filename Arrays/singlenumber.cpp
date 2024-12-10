//Problem Link:- https://leetcode.com/problems/single-number/
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i = 0; i < nums.size() ; i++){
//             mp[nums[i]]++;
//         }
//         for(auto it: mp){
//             if(it.second == 1){
//                 return it.first;
//             }
//         }
//         return 0;
//     }
// };
//XOR all the numbers
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int res=0;
//         for(auto it: nums){
//             res ^= it;
//         }
//         return res;  
//     }
// };