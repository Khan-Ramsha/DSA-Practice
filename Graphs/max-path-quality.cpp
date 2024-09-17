//Leetcode Pno-2065
//Level- Hard
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     int maxQuality = 0;

//     void dfs(int node, int time, int value, int maxTime, vector<int>& values, unordered_set<int>& vis, unordered_map<int, vector<pair<int, int>>>& graph) {
//         if (node == 0) {
//             maxQuality = max(maxQuality, value); // Update maxQuality based on value
//         }

//         for (auto& it : graph[node]) {
//             int a = it.first; // Neighbor node
//             int b = it.second; // Time to reach neighbor node

//             if (time + b <= maxTime) { // Ensure we do not exceed maxTime
//                 if (vis.find(a) == vis.end()) { // If node 'a' hasn't been visited
//                     vis.insert(a); // Mark as visited
//                     dfs(a, time + b, value + values[a], maxTime, values, vis, graph); // Visit the next node
//                     vis.erase(a); // Backtrack by unvisiting the node
//                 } else {
//                     dfs(a, time + b, value, maxTime, values, vis, graph); // Visit without adding value if already visited
//                 }
//             }
//         }
//     }

//     int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
//         unordered_map<int, vector<pair<int, int>>> graph;

//         // Build the graph
//         for (auto& edge : edges) {
//             int u = edge[0], v = edge[1], t = edge[2];
//             graph[u].push_back({v, t});
//             graph[v].push_back({u, t});
//         }

//         // Use unordered_set to track visited nodes
//         unordered_set<int> vis = {0}; // Start with node 0 visited
//         dfs(0, 0, values[0], maxTime, values, vis, graph);

//         return maxQuality;
//     }
// };
