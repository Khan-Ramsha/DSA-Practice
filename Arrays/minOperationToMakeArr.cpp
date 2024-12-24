// Mini operations to make array elements = k
//class Solution {
// public:
//     int minOperations(vector<int>& nums, int k) {
//         int op =0;
//         sort(nums.begin(), nums.end());
//         if(nums[0] < k) return -1;
//         for(int i = nums.size()-1 ; i > 0; i--){
//             if(nums[i] != nums[i-1]) op++;
//         }
//         if(nums[0] > k) op++;
//         return op;
//     }
// };

class Solution{
public:
    int minOperations(vector<int>& nums, int k){
        int op = 0;
        unordered_set<int> st(nums.begin(), nums.end());
        for(auto it: st){
            if(it > k){
                op++;
            }
            else if(it < k){
                return -1;
            }
        }
        return op;
    }

};