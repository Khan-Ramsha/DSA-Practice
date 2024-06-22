
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
// Brute force approach
// TIME COMPLEXITY= O(N^3) 
// SPACE COMPLEXITY= FOR SET DATA STRUCTURE AND FOR ANS VECTOR 2* O(NUMBER OF TRIPLETS)
// vector<vector<int>> triplet(int n, vector<int> &nums)
// {   
//     set<vector<int>> st;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){

//                 if(nums[i]+nums[j]+nums[k]==0)
//                 {
//                     vector<int> temp={nums[i],nums[j],nums[k]};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
                    

//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(),st.end());
//     return ans;
// }

// int main(){
//     vector<int> nums{-1,0,1,2,-1,-4};
//     int n=nums.size();
//     vector<vector<int>> res=triplet(n,nums);
//     for (const auto& triplet : res) {
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
    

    
// }

// USINH HASHING WHICH GIVES TC: O(N^2)
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> st;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             set<int> hashset;
//             for(int j=i+1;j<n;j++){
//                 int third=-(nums[i]+nums[j]);
//                 if(hashset.find(third)!= hashset.end()){
//                     vector<int> temp={nums[i],nums[j],third};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 } 
//                 hashset.insert(nums[j]);
                
//             }
//         }
//         vector<vector<int>> ans(st.begin(),st.end());
//         return ans;
//     }
// };

// OPTIMAL APPROACH - USING 2 POINTERS
vector<vector<int>> threeSum(vector<int>& nums,int n){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                vector<int> temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
                
            }
        }

    }
    return ans;


}
int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    int n=nums.size();
    vector<vector<int>> res=threeSum(nums,n);
    for (const auto& triplet : res) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

}