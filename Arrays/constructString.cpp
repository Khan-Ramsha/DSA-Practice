//Construct String With Repeat Limit: https://leetcode.com/problems/construct-string-with-repeat-limit/

// class Solution {
// public:
//     string repeatLimitedString(string s, int repeatLimit) {
//         vector<int> freq(26,0);//stores the occurances of every character in given string
//         string res = "";
//         int ptr = 25;
//         for(auto it: s){
//             freq[it - 'a']++; //increment the freq
//         }
//         while(ptr >= 0){
//             if(freq[ptr] == 0){
//                 ptr--;
//                 continue;
//             }
//             int curr = min(freq[ptr],repeatLimit);
//             res.append(curr, 'a' + ptr); // 1st paramter: number of occurences, 2nd: character
//             freq[ptr] -= curr;
//             if(freq[ptr])
//             {
//                 int nextChar = ptr - 1;
//                 while(nextChar >= 0 && freq[nextChar] == 0)
//                 {
//                     nextChar--;
//                 }
//                 if(nextChar < 0) break;
//                 res.push_back('a' + nextChar);
//                 freq[nextChar]--;
//             }

//         }
//         return res;
//     }
// };
class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> freq;
        priority_queue<char> maxH;
        string res="";
        for(auto it: s){
            freq[it]++;
        }
        for(auto &[ch, n] : freq){
            maxH.push(ch);
        }
        while(!maxH.empty()){
            auto top = maxH.top();
            maxH.pop();
            int count = min(freq[top], repeatLimit);
            res.append(count , top);
            freq[top] -=count;
            if(freq[top] > 0 && !maxH.empty()){
                auto ch = maxH.top();
                maxH.pop();
                res.push_back(ch); 
                freq[ch]--;
                if(freq[ch]) maxH.push(ch);
                maxH.push(top);
            }

        }
        return res;
    }
};