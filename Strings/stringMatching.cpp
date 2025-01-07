class Solution {
public:
    static bool comparator(const string& a, const string& b){
        return a.size() < b.size();
    }
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        sort(words.begin(), words.end(), comparator);
        for(int i = 0; i < words.size(); i++){
            for(int j = i + 1; j < words.size(); j++){
                if(words[j].find(words[i]) != std:: string :: npos){
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
//brute force
// class Solution {
// public:
//     vector<string> stringMatching(vector<string>& words) {
//         vector<string> ans;
//         for(int i = 0; i < words.size(); i++){
//             for(int j = 0; j < words.size(); j++){
//                 if(i == j) continue;
//                 if(words[j].find(words[i]) != std:: string :: npos){
//                     ans.push_back(words[i]);
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };