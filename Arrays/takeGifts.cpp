// //Brute force
// class Solution {
// public:
//     long long pickGifts(vector<int>& gifts, int k) {
//         for(int i = 0; i < k ; i++){
//             int maxIndex = 0;
//             for(int j = 1; j < gifts.size(); j++){
//                 if(gifts[maxIndex] < gifts[j]){
//                     maxIndex = j;
//                 }
//             }
//             gifts[maxIndex] = sqrt(gifts[maxIndex]);
//         }
//         long long int sum = accumulate(gifts.begin(), gifts.end(), 0LL);
//         return sum;
//     }
// };

// //Heap
// class Solution {
// public:
//     long long pickGifts(vector<int>& gifts, int k) {
//         priority_queue<int> pq(gifts.begin(), gifts.end());
//         while(k--){
//             int maxEle = pq.top();
//             pq.pop();
//             pq.push(sqrt(maxEle));
//         }
//         long long ans=0;
//         while(!pq.empty()){
//             ans += pq.top();
//             pq.pop();
//         }
//         return ans;
//     }
// };