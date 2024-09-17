
//Leetcode: 131. Palindrome Partitioning
// class Solution {
// public:
//     // Function to check if a substring is a palindrome
//     bool isPalindrome(string &s, int start, int end) {
//         while (start < end) {
//             if (s[start] != s[end]) return false;
//             start++;
//             end--;
//         }
//         return true;
//     }

//     // Helper function to find all palindrome partitions
//     void backtrack(string &s, int start, vector<string> &currentPartition, vector<vector<string>> &result) {
//         if (start == s.size()) {
//             result.push_back(currentPartition);
//             return;
//         }
//         for (int end = start; end < s.size(); end++) {
//             if (isPalindrome(s, start, end)) {
//                 // Add the current palindromic substring to the partition
//                 currentPartition.push_back(s.substr(start, end - start + 1));
//                 // Recur to find partitions for the remaining string
//                 backtrack(s, end + 1, currentPartition, result);
//                 // Backtrack by removing the last added substring
//                 currentPartition.pop_back();
//             }
//         }
//     }

//     // Main function to partition the string into all palindromic substrings
//     vector<vector<string>> partition(string s) {
//         vector<vector<string>> result;
//         vector<string> currentPartition;
//         backtrack(s, 0, currentPartition, result);
//         return result;
//     }
// };
