///Find Longest Special Substring That Occurs Thrice I and II
// class Solution {
// public://since contraints are small, brute force works , this is for I)
//     int maximumLength(string s) {
//         int n = s.size();
//         unordered_map<string,int> mp;
//         for(int i = 0; i < n ; i++){
//             string str;
//             char start = s[i];
//             for(int j = i; j < n; j++){
//                 if(start == s[j]){
//                     str+=s[j];
//                     mp[str]++;
//                 }
//                 else {
//                     break;
//                 }
//             }
//         }
//         int ans=-1;
//         for(auto it: mp){
//             int len = it.first.size();
//             //checking length and freq
//             if(it.second >= 3 && len > ans ) ans = len;
//         }
//         return ans;
//     }
// };
//Binary search approach for I) and II)
// class Solution {
// public:
//     bool helper(string s, int n, int len){
//         int p = 0;
//         vector<int> count(26, 0);
//         for(int i=0; i<n; i++){
//             while(s[i] != s[p]) p++;
//             if(i - p + 1 >= len) count[s[i] - 'a']++;
//             if(count[s[i] - 'a'] >= 3) return true;
//         }
//         return false;
//     }
//     int maximumLength(string s) {
//         int n = s.size();
//         int low = 1, high = n;
//         if(!helper(s,n,low)) return -1;
//         //search space 1---->n
//         while(low + 1 < high){
//             int mid = (low + high) / 2;
//             if(helper(s, n, mid)){
//                 low = mid;
//             }
//             else{
//                 high = mid;
//             }
//         }
//         return low;
//     }
// };

//my failure Trail, doesnt check if substr has all same character
// class Solution {
// public:
//     int maximumLength(string s) {
//         int n = s.size();
//         unordered_map<string,int> mp;
//         for(int i = 0; i < n ; i++){
//             string str;
//             for(int j = i; j < n; j++){
//                 str+=s[j];
//                 mp[str]++;
//             }
//         }
//         int len=-1;
//         for(auto it: mp){
//             if(it.second > len) len = it.second;
//         }
//         return len;
//     }
// };