// class Solution {
// public:
//     vector<int> twoSum(vector<int>& a, int target) {
        //By brute force but the time complexity is O(n^2)
        // vector<int>ans;
        // for(int i=0;i<a.size();i++){
        //     for(int j=i+1;j<a.size();j++){
        //         if(a[i]+a[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;
        //better solution
        // unordered_map<int,int> hash;
        // for(int i=0;i<a.size();i++){
        //     hash[a[i]]=i;
        // }
        // for(int i=0;i<a.size();i++){
        //     int complement=target-a[i];
        //     if(hash.find(complement) != hash.end() && hash[complement] != i)
        //     {
        //         return {i, hash[complement]};
        //     }
        
        // }
        // return {};
        //optimized
//         unordered_map<int,int> map;
//         int n=a.size();
//         for(int i=0;i<n;i++){
//             int k=target-a[i];
//             if(map.find(k)!=map.end()){
//                 return{map[k],i};

//             }
//             else{
//                 map[a[i]]=i;
//             }

//         }
//         return {-1,-1};
        
//     }  
// };
// 2 pointer approach
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
string twoSum(int n,int *a,int target){
    int i=0,j=n-1;  
    sort(a,a+n);
    
    while(i<j){
        int sum=a[i]+a[j];
        if(sum==target){
            return "YES";
            
        }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }

    
    }
    return "NO";
}
int main()
{   
    
    int target=6;
    int a[] = {3,2,4};
    int n = sizeof(a) / sizeof(int);
    string ans=twoSum(n,a,target);
    cout<<ans;


}

