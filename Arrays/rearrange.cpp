//Problem Link-->https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// class Solution {
// public: Method 1
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> res(nums.size());
//         int p=0,n=1;
//         for(auto it: nums){
//             if(it >= 0){
//                 //pos num
//                 res[p]=it;
//                 p+=2;
//             }
//             else{
//                 res[n]=it;
//                 n+=2;
//             }
//         }
//         return res;
//     }
// };
// class Solution {
// public: Method2
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> res;
//         vector<int> pos,neg;
//         for(auto it: nums){
//             if(it >= 0){
//                 //pos num
//                 pos.push_back(it);   
//             }
//             else{
//                 neg.push_back(it);
//             }
//         }
//         for(int i=0 ;i<pos.size();i++){
//             res.push_back(pos[i]);
//             res.push_back(neg[i]);

//         }
//         return res;
//     }
// };

// class Solution {
// public: 
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> res;
//         vector<int> pos,neg;
//         int p=0;
//         int n=0;
//         for(auto it: nums){
//             if(it >= 0){
//                 //pos num
//                 pos.push_back(it);
//             }
//             else{
//                 neg.push_back(it);
//             }
//         }
//         for(int i=0 ;i<pos.size();i++){
//             res.push_back(pos[p++]);
//             res.push_back(neg[n++]);

//         }
//         return res;
//     }
// };




