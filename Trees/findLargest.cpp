//https://leetcode.com/problems/find-largest-value-in-each-tree-row/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 //BFS
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return vector<int> {};
        queue<TreeNode*> q;
        int level = 0;
        vector<int> res;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int maximum = INT_MIN;
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                maximum = max(maximum, node->val);
                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr)  q.push(node->right);  
            }
            res.push_back(maximum);
        }
        return res;
    }
};
// DFS Iterative using stack
// class Solution {
// public:
//     vector<int> largestValues(TreeNode* root) {
//         stack<pair<TreeNode*, int>> st;
//         vector<int> ans;
//         st.push({root, 0});//{node, level}
//         while(!st.empty()){
//             pair<TreeNode*, int> value = st.top();
//             st.pop();
//             TreeNode* node = value.first; 
//             int level = value.second;
//             if(level == ans.size()) ans.push_back(node->val);
//             else ans[level] = max(ans[level], node->val);
//             if(node->left) st.push({node->left, level + 1});
//             if(node->right) st.push({node->right, level + 1});

//         }
//         return ans;
//     }
// };