// Unique Length-3 Palindromic Subsequences
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> unique, possible;
        int ans = 0;
        for(auto ch: s){
            unique.insert(ch);
        }
        for(auto ch: unique){
            int first = -1, last = 0;
            for(int k = 0; k < s.size(); k++){
                if(s[k] == ch){
                    if(first == -1) first = k;//setting first occurance
                    last = k;
                }
            }
            possible.clear();
            for(int j = first + 1; j <= last - 1; j++){
                possible.insert(s[j]);
            }
            ans += possible.size();

        }
        return ans;
    }
};