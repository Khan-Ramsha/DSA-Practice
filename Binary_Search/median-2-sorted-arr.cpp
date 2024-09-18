//leetcode: 4. Median of Two Sorted Arrays

// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int i=0,j=0;
//         int n=nums1.size();
//         int m=nums2.size();
//         int length=n+m;
//         int median=length/2;
//         int prev=0,curr=0;
//         for(int count=0;count<=median;count++){
//             prev=curr;
//             if(i<n && (j>=m || nums1[i]<nums2[j])){
//                 curr=nums1[i++];
//             }
//             else{
//                 curr=nums2[j++];
//             }
//         }
//         if(length % 2 ==1){
//             return curr;
//         }
//         else 
//         {   return (prev+curr)/2.0;
//         }
        
//     }
// };