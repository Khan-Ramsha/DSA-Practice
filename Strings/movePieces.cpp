// https://leetcode.com/problems/move-pieces-to-obtain-a-string/
    // class Solution {
    // public:
    //     bool canChange(string start, string target) {
    //         int i = 0;
    //         int j = 0; 
    //         int n = start.size();
    //         // if(start==target) return true;
    //         while( i < n && j < n){
    //             while(i < n && start[i] == '_') i++; // bypass all underscores
    //             while(j < n && target[j] == '_') j++;
    //             if (i == n || j == n) break;
    //             if(start[i] != target[j]) return false;
    //             if(start[i] == 'L' && j > i) return false;
    //             if(start[i] == 'R' && j < i) return false;
    //             i++; 
    //             j++;
    //         }
    //         while(i < n && start[i] == '_') i++; //ignoring all underscores that might remain
    //         while(j < n && target[j] == '_') j++;
    //         return (i == n && j == n);
    //     }
    // };