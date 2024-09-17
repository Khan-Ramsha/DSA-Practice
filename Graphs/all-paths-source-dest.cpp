//Leetcode Pno: 797
//Level-Medium
// class Solution {
// public:
//     void dfs(int sr,int target,vector<int> &temp,vector<vector<int>> &result,
//     vector<vector<int>>& graph){
//         temp.push_back(sr);
//         if(sr==target){
//             result.push_back(temp);
//         }
//         //we need to explore the neighbors
//         else{
//             for(int &v: graph[sr]){
//                 dfs(v,target,temp,result,graph);
//             }

//         }
//         temp.pop_back();
//     }
//     vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
//         int n=graph.size();
//         vector<int> temp;
//         vector<vector<int>> result;
//         int sr=0;
//         int target=n-1;
//         dfs(sr,target,temp,result,graph);
//         return result;
//     }
// };