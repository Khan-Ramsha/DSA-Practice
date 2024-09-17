// class Solution {
// public:
//     unordered_map<Node*, Node*> mp;

//     void dfs(Node* node) {
//         // Traverse all the neighbors of the original node
//         for(Node* neighbor : node->neighbors) {
//             if(mp.find(neighbor) == mp.end()) {
//                 // Clone the neighbor if it's not already cloned
//                 Node* clone_neighbor = new Node(neighbor->val);
//                 mp[neighbor] = clone_neighbor;
//                 // Add the cloned neighbor to the current node's cloned neighbors
//                 mp[node]->neighbors.push_back(clone_neighbor);
//                 // Continue DFS traversal for the newly cloned neighbor
//                 dfs(neighbor);
//             } else {
//                 // If the neighbor is already cloned, just add it to the current node's neighbors
//                 mp[node]->neighbors.push_back(mp[neighbor]);
//             }
//         }
//     }

//     Node* cloneGraph(Node* node) {
//         if(!node) {
//             return nullptr;
//         }
//         // Create a clone for the first node
//         Node* clone_node = new Node(node->val);
//         mp[node] = clone_node;
//         // Start DFS traversal from the original node
//         dfs(node);
//         return clone_node;
//     }
// };
