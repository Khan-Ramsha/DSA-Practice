// class Solution {
// public:
//     string addSpaces(string s, vector<int>& spaces) {
//         string modifiedStr; //Initialize empty string
//         int ptr = 0; // ptr for space 
//         int n = spaces.size();
//         // Iterate through the original string
//         for(int i = 0 ; i < s.size(); i++){
//             if( ptr < n && spaces[ptr] == i){
//                 modifiedStr += ' '; //before appending character, append the space
//                 ptr++; //move to the next index in the space vector

//             }
//             modifiedStr += s[i];
//         }
//         return modifiedStr;
//     }
// };