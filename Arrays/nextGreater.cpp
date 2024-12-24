// https://leetcode.com/problems/next-greater-element-i/
//Brute force

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums2.size();
        for(int i = 0; i < nums1.size(); i++){
            int greaterEle = -1;
            for(int j = 0; j < n; j++){
                if(nums1[i] == nums2[j]){
                    for(int k = j+1; k < n; k++){
                        if(nums2[k] > nums2[j]){
                            greaterEle = nums2[k];
                            break;
                        }
                    }
                    break;
                }
            }
            ans.push_back(greaterEle);
        }
      
        return ans;
    }
};
//Monotonic Stack

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mpp;
        int n = nums2.size();
        int n1 = nums1.size();
        vector<int> ans;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && nums2[i] > st.top()) st.pop();
            mpp[nums2[i]] = st.empty() ? -1 : st.top();
            st.push(nums2[i]);
        }
        for(auto it: nums1){
            ans.push_back(mpp[it]);
        }
        return ans;
    }
};
