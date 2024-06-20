// copying the leetcode sol
// the logic is as follows- create prefix array which contains product of elements from left to right
// create suffix having prod from right => left. then the ans vector which has suffix*prefix which gives answer.

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int> & nums) {
//       vector<long long> prefix(nums.size()),suffix(nums.size());
//       prefix[0]=1;
//       suffix[nums.size()-1]=1;
//       for(int i=1;i<nums.size();i++){
//         prefix[i]=prefix[i-1]*nums[i-1];
//       }
//       for(int i=nums.size()-2;i>=0;i--){
//         suffix[i]=suffix[i+1]*nums[i+1];
//       }
//       vector<int> ans(nums.size());
//       for(int i=0;i<nums.size();i++){
//         ans[i]=int(suffix[i]*prefix[i]);
//       }
//       return ans;

//     }
// };
// original array = 1,2,3,4
// prefix array = 1,1,2,6
// suffix array = 24,12,4,1
// suff * pre =   24,12,8,6
// using long long as the value overflows and int cant be used, but while storing ans type casting into int.
