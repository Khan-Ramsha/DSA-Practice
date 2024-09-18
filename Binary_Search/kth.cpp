//kth element of two sorted arrays
//Problem Link: https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1
// class Solution {
//   public:
//     int kthElement(int k, vector<int>& nums1, vector<int>& nums2) {
//         // code here
//         int i=0,j=0;
//         int n=nums1.size();
//         int m=nums2.size();
//         int prev=0,curr=0;
//         for(int count=0;count<=k;count++){
//             prev=curr;
//             if(i<n && (j>=m || nums1[i]<nums2[j])){
//                 curr=nums1[i++];
//             }
//             else{
//                 curr=nums2[j++];
//             }
//         }
//         return prev;
//     }
// };