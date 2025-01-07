//Shift Letters-2
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> arr(s.size() + 1);
        for(auto& shift: shifts){
            int ind1 = shift[0];
            int ind2 = shift[1];
            int dir = shift[2]; 
            if(dir == 1){
                arr[ind1] += 1;
                arr[ind2 + 1] -= 1;
            }
            else{
                arr[ind1] -= 1;
                arr[ind2 + 1] += 1;
            }
        }
        int shift = 0;
        for(int i = 0; i < s.size(); i++){
            shift += arr[i];
            int effective = (shift % 26 + 26) % 26;
            s[i] = (s[i] - 'a' + effective) % 26 + 'a';   
        }
        return s;
    }
};
//Brute force approach
// class Solution {
// public:
//     string shiftingLetters(string s, vector<vector<int>>& shifts) {
//         for(auto& it: shifts){
//             int ind1 = it[0];
//             int ind2 = it[1];
//             int dir = it[2];
//             for(int i=ind1; i <= ind2; i++){
//                 if(dir == 0){
//                     //need to move backward
//                     int shift = -1;
//                     char ch =  (s[i] - 'a' + shift + 26) % 26 + 'a';
//                     s[i] = ch;
//                 }
//                 if(dir == 1){
//                     int shift = 1;
//                     char ch =  (s[i] - 'a' + shift + 26) % 26 + 'a';
//                     s[i] = ch;
//                 }
//             }
//         }
//         return s;
//     }
// };