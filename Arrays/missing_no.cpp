#include <bits/stdc++.h>
using namespace std;
//BRUTE FORCE APPROACH- TIME COMPLEXITY=O(N*N), SPACE COMPLEXITY=O(1)
// int linearSearch(int a[],int n){
//     for (int i = 1; i <= n; i++)
//     {
//         int flag=0;
//         for (int j = 0; j < n-1; j++)
//         {
//             if(a[j]==i){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//             return i;
//         }   
//     }   
// }
// BETTER APPROACH- USING HASHING, TIME COMPLEXITY=O(N), SPACE COMPLEXITY=O(N)
// int hashing(int a[],int n)
// {
//     int hash[n + 1] = {0};
//     for (int i = 0; i < n-1; i++) { // the time complexity of this loop is O(n)
//         hash[a[i]]++;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if(hash[i]==0){
//             return i;
//         }
//     }

// }

//OPTIMAL SOLUTION
int sum(int a[],int n){
    int sum1 = (n * (n + 1)) / 2; //sum of 1st N numbers
    int sum2 = 0;
    for (int i = 0; i < n - 1; i++) {
        sum2 += a[i];
    }
    int missingNum = sum1 - sum2;
    return missingNum;


}

int main(){
    int a[]={1,2,3,4,5,6,7,9};
    int n=9;
    int ans=sum(a,n);
    cout<<ans<<" ";
    return 0;
}

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         //approach 1
//         int n = nums.size();
//         vector<int> ans(n+1,-1);
//         for(auto it : nums){
//             ans[it]=it;
//         }
//         for(int i=0 ; i<ans.size() ; i++){
//             if(ans[i] == -1){
//                 return i;
//             }
//         }
//         return 0;
//     }
// };