https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
//Sum of left and right moves
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n, 0);
        int leftMove = 0, rightMove = 0, leftBall = 0, rightBall = 0;
        for(int i = 0; i < n; i++){
            ans[i] += leftMove;
            leftBall += boxes[i] - '0';
            leftMove += leftBall;
            int j = n - 1 - i;
            ans[j] += rightMove;
            rightBall += boxes[j] - '0';
            rightMove += rightBall;
        }
        
        return ans;
    }
};
//Brute Force
// class Solution {
// public:
//     vector<int> minOperations(string boxes) {
//         vector<int> ans(boxes.size(), 0);
//         for(int i = 0; i < boxes.size(); i++){
//             if(boxes[i] == '1'){
//                 for(int j = 0; j < boxes.size(); j++){
//                     ans[j] += abs(i - j);
//                 }
//             }
//         }
//         return ans;
//     }
// };