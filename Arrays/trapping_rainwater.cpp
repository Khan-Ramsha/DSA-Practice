// Leetcode question no 42 but using Array 
// Find the Total no of trapped water area.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int trap(int *heights,int n){
    int leftMax[20000];
    int rightMax[20000];
    
    leftMax[0]=heights[0];
    rightMax[n-1]=heights[n-1];
    cout<<"Left Max of current bar: ";
    for(int i=1;i<n;i++){
        leftMax[i]=max(heights[i-1],leftMax[i-1]);
        cout<<leftMax[i]<<" ";
       
    }
     cout<< endl;
     cout<<"Right Max of current bar: ";
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],heights[i+1]);
        cout<<rightMax[i]<<" ";
       
    }
     cout<< endl;
    int trapped=0;
    for(int i=0;i<n;i++){
        int waterTrapped=min(leftMax[i],rightMax[i])-heights[i];
        if(waterTrapped>0){
            trapped+=waterTrapped;
        }
    }
    cout<<"Water Trapped="<<trapped<<" ";


}
int main(){
    int heights[]={4,2,0,6,3,2,5};
    // int heights[]={6,5,4,3,2,1};
    int n = sizeof(heights) / sizeof(int);
    trap(heights,n);
}
// Note if the array is ascending or descending NO water trapped and hence ans will be 0.
//TWO POINTER APPROACH
// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n=height.size();
//         int left=0,right=n-1;
//         int res=0;
//         int leftMax,rightMax=0;
//         while(left<=right){
//             if(height[left]<=height[right]){
//                 if(height[left]<=height[right]){
//                     if(height[left]>leftMax){
//                         //update value of leftmax
//                         leftMax=height[left];
//                     }

//                     else{
//                         res+=leftMax-height[left];
//                     }
//                 left++;
//                 }
//             }
//             else{
//                 if(height[right]>=rightMax){
//                     rightMax=height[right];

//                 }
//                 else{
//                     res+=rightMax-height[right];
//                 }
//                 right--;
//             }
            
//         }
//         return res;
//     }
// };