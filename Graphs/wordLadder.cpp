
//LEETCODE PROBLEM NO 127 WORD LADDER
//LEVEL- HARD

// class Solution {
// public:
//     int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//         queue<pair<string,int>> q;
//         unordered_set<string> st(wordList.begin(),wordList.end());
//         if (st.find(endWord) == st.end()) return 0;
//         q.push({beginWord,1});
//         st.erase(beginWord);
//         while(!q.empty()){
//             auto [currentWord, steps] = q.front();
//             q.pop();
//             if (currentWord == endWord) return steps;

//             for(int i=0;i<currentWord.size();i++){
//                 string original=currentWord;
//                 for(char ch = 'a'; ch <= 'z'; ch++){
//                     original[i]=ch;
//                     if(st.find(original) != st.end()){
//                         q.push({original,steps+1});
//                         st.erase(original);
//                     }
//                 }
               
//             }
//         }
//         return 0;
//     }
// };

//PROBLEM LINK - https://www.geeksforgeeks.org/problems/word-ladder/1

// int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
//         queue<pair<string,int>> q;
//         q.push({startWord,1});
//         unordered_set<string> st(wordList.begin(),wordList.end());
//         st.erase(startWord);
//         while(!q.empty())
//         {
//             string word=q.front().first;
//             int steps=q.front().second;
//             q.pop();
//             if(word==targetWord) return steps;
            
//             for(int i=0;i<word.size();i++){
//                 char original=word[i];
//                 for(char ch='a';ch<='z';ch++){
//                     word[i]=ch;
//                     if(st.find(word)!=st.end())
//                     {
//                         st.erase(word);
//                         q.push({word,steps+1});
                        
//                     }
//                 }
//                 word[i]=original;

//             }
            
//         }   
        
//         return 0;
//     }
