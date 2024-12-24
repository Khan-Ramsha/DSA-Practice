// https://leetcode.com/problems/find-minimum-diameter-after-merging-two-trees/description/
class Solution {
public:
    vector<vector<int>> makeGraph(vector<vector<int>>& edges){
        int n = edges.size();
        vector<vector<int>> g(n+1); //having n + 1 nodes where n is the size of edges
        for(auto edge: edges){
            int node1 = edge[0];
            int node2 = edge[1];
            g[node1].push_back(node2);
            g[node2].push_back(node1);//since its undirected graph 
        }
        return g;
    }
    void maxDepth(int node , int parent, int dis,  vector<vector<int>>& grph, pair<int,int>& pair){//aim of maxDepth is to find the extreme nodes and the distance,updating pair
        if(dis > pair.first){
            pair={dis, node};
        }
        for(auto it: grph[node]){
            if(it != parent){
                maxDepth(it, node, dis + 1, grph, pair);
            }//avoiding revisiting parent node
        }//neighbour traversal
    }
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {int ans = 0;
        //Step 1: Make a graph out of edges
        auto graph1 = makeGraph(edges1), graph2 = makeGraph(edges2);//forming graphs
        //Step 2: For both graphs, find first 2 extreme/farthest nodes and diameter
        pair<int, int> pair1 = {INT_MIN, -1}, pair2 = {INT_MIN, -1};//{distance, node}
        maxDepth(0, -1, 0, graph1, pair1);//first extreme/farthest
        maxDepth(pair1.second, -1 , 0, graph1, pair2); // from first extreme node find the second extreme node and dist
        int d1 = pair2.first;
        pair1 = {INT_MIN, -1}; pair2 = {INT_MIN, -1};//{distance, node}
        maxDepth(0, -1 , 0, graph2, pair1);//update the pair1
        maxDepth(pair1.second, -1, 0, graph2, pair2);
        int d2 = pair2.first;
        int val = (((d1 + 1) / 2 + (d2 + 1) / 2) + 1);
        ans = max({d1, d2, val});
        return ans;
    }
};