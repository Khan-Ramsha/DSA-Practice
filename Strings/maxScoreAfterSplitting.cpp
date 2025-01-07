// https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/
//Brute Force
class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
            int countZero = 0, countOnes = 0;
            for(int j = 0; j <= i; j++){
                if(s[j] == '0') countZero++;
            }
            for(int k = i + 1; k < n; k++){
                if(s[k] == '1') countOnes++;
            }
            score = max(score, (countOnes + countZero));
        }
        return score;
    }
};

// //Prefix Sum
// class Solution {
// public:
//     int maxScore(string s) {
//         int score = 0;
//         int n = s.size();
//         vector<int> leftCount(n , 0), rightCount(n , 0);
//         if(s[0] == '0') leftCount[0] = 1;
//         for(int i = 1; i < n; i++){
//             if(s[i] == '0') leftCount[i] = leftCount[i - 1] + 1;
//             else leftCount[i] = leftCount[i - 1] + 0;
//         }
//         if(s[n - 1] == '1') rightCount[n - 1] = 1;
//         for(int i = n - 2; i >= 0; i--){
//             if(s[i] == '1') rightCount[i] = rightCount[i + 1] + 1;
//             else rightCount[i] = rightCount[i + 1] + 0;
//         }
//         for(int i = 0; i < n - 1; i++){
//             score = max(score, leftCount[i] + rightCount[i + 1]);
//         }
//         return score;
//     }
// };

//Optimized Approach
class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int n = s.size();
        int ones = count(s.begin(), s.end(), '1'), zeros = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == '0') zeros++;
            else ones--;
            score = max(score, ones + zeros);
        }
        return score;
    }
};