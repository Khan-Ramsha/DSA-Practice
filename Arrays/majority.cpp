// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> mpp;
//         int n = nums.size();
//         for(auto it: nums){
//             mpp[it]++;
//             if(mpp[it]  > n/2){
//                 return it;
//             }
//         }
//         return -1;
//     }
// };
// the above solution requires additional space

// optimized:-
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int candidate = 0;
//         int count = 0;
//         for(auto it: nums){
//             if(count == 0){
//                 candidate = it; // new candidate 
//                 count = 1; //reset count
//             }
//             else if(it == candidate){
//                 count++;
//             }
//             else{
//                 count--;
//             }
//         }
//         return candidate;
//     }
// };
