//Problem Link:-https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
// class Solution {
// public:
//     int isPrefixOfWord(string sentence, string searchWord) {
//         string ch = "";
//         int ind=1;
//         for(char it : sentence){
//             if(it == ' '){
//                 ind++;
//                 ch = "";//reset
//             }
//             else if(it != ' '){
//                 ch += it;
//                 if(ch == searchWord){
//                     return ind;
//                 }
//             }
//         }
//         return -1;
//     }
// };