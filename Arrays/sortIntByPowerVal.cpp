// class Solution {
// public:
//     int getVal(int i){
//         int cnt = 0;
//         while(i != 1)
//         {
//             if(i % 2 == 0)
//             {
//                 i = i / 2;
//             }
//             else 
//             {
//                 i = 3 * i + 1;
//             }
//             cnt++;
//         }
//         return cnt;
//     }
//     int getKth(int lo, int hi, int k) {
//         priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> pq; 
//         int ans;
//         int power;
//         for(int i = lo; i <= hi; i++){
//             power = getVal(i);
//             pq.push({power, i});
//         }
//         while(!pq.empty() && k>=0){
//             if(k == 1){
//                 ans = pq.top().second;
//                 break;
//             }
//             pq.pop();
//             k--;
//         }
//         return ans;
//     }
// };
