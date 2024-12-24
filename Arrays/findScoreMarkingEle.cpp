// class Solution {
// public:
// //using min-heap
//     long long findScore(vector<int>& nums) {
//         long long score = 0;
//         int n = nums.size();
//         vector<bool> marked(n, false);//initially , no elements are marked
//         priority_queue<pair<int, int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;//min heap
//         for(int i = 0; i < n ; i++){
//             pq.push({nums[i], i});//populating into heap
//         }
//         while(!pq.empty()){
//             auto [val, ind] = pq.top();
//             pq.pop();
//             if(!marked[ind]){//if ind is not marked, its time to consider it
//                 score += val;
//                 marked[ind] = true;
//                 if(ind - 1 >= 0 && !marked[ind - 1]) marked[ind - 1] = true; //checking bounds and whether its not marked
//                 if(ind + 1 < n && !marked[ind + 1]) marked[ind + 1] = true;
//             }
//         }
//         return score;
//     }
// };
//Sorting
// class Solution {
// public:
//     long long findScore(vector<int>& nums) {
//     //2d array for storing index, element. storing index is necessary for marking its adj 
//         vector<pair<int, int>> sorted;//{num, index}
//         long long score = 0;
//         int n = nums.size();
//         vector<bool> marked(n , false);
//         for(int i = 0; i < n ; i++){
//             sorted.push_back({nums[i], i});
//         }//sorted is ready
//         sort(sorted.begin(), sorted.end());
//         for(int s = 0; s < n ; s++){
//             int index = sorted[s].second;
//             if(!marked[index]){
//                 score += sorted[s].first;
//                 marked[index] = true;
//                 if( index > 0  && !marked[index - 1]) marked[index - 1] = true;
//                 if( index < n  && !marked[index + 1]) marked[ index + 1] = true;
//             }
//         }
//         return score;

//     }
// };