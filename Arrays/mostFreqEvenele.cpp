// class Solution {
// public:
//     int mostFrequentEven(vector<int>& nums) {
//         unordered_map<int,int> mpp; // element, frequency
//         for(auto it : nums){
//             if(it % 2 == 0){ //even element
//                 mpp[it]++;
//             }
//         }//mpp  only contains the even element freq
//         int maxF = -1;
//         int ele = -1;
//         for(auto it : mpp){
//             if(it.second > maxF)
//             {
//                 maxF = it.second;
//                 ele = it.first;
//             }
//             else{
//                 // if tie
//                 if(it.second == maxF && it.first < ele){
//                     ele = it.first;
//                 }
//             }
            
//         }
//         return ele;  
//     }
// };