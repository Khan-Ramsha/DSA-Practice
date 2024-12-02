//Problem Link:- https://leetcode.com/problems/check-if-n-and-its-double-exist/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        //Brute Force
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             if((arr[i] == 2 * arr[j]) && (i != j)){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // } Time Complexity:- O(n^2), Space Complexity:- O(1)
        unordered_set<int> st;
        for(auto it: arr){
            if(st.find(it * 2) != st.end() || (it % 2 == 0 && st.find(it / 2) != st.end())){
                return true;
            }
            st.insert(it);
        }
        return false;
    }
    
};