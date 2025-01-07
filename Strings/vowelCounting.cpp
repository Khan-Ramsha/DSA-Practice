//https://leetcode.com/problems/count-vowel-strings-in-ranges/
//Brute Force
// class Solution {
// public:
//     vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
//         vector<int> arr;
//         unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
//         for(auto &it: queries){
//             int count = 0;
//             int indx1 = it[0], indx2 = it[1];
//             for(int i = indx1; i <= indx2; i++){
//                 string s = words[i];
//                 if(vowels.count(s[0]) && vowels.count(s[s.size() -1])) count++;
//             }
//             arr.push_back(count);
//         }
//         return arr;
//     }  
// };
//Prefix Sum
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
        vector<int> prefixSum(words.size());
        int count = 0;
        for(int i = 0; i < words.size(); i++){
            string s = words[i];
            //check if this string in the list is satisfying the condition
            //and the condition is that the starting and the ending alphabet of string should be a vowel
            if(vowels.count(s[0]) && vowels.count(s[s.size() - 1])) count++;
            prefixSum[i] = count;//storing the sum so far
        }
        for(auto& it: queries){
            int indx1 = it[0], indx2 = it[1];
            ans.push_back(prefixSum[indx2] - (indx1 > 0 ? prefixSum[indx1 - 1] : 0));
        }
        return ans;
    }  
};