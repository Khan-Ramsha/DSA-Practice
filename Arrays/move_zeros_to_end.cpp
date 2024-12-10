//MOVING ZEROS TO END
// BRUTE FORCE APPROACH - TIME COMPLEXITY = O(N) AND SPACE COMPLEXITY = O(N)
#include <bits/stdc++.h>
using namespace std;
// void movetoend(int nums[],int size){
//     int temp[size],j=0;
//     for(int i = 0; i < size; i++)
//     {
//         if(nums[i]!=0){
//             temp[j]=nums[i];
//             j++;
//         }
        
//     }
   
//     while (j<size)
//     {
//         temp[j]=0;
//         j++;
//     }
//     cout<<"Temp arr:";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<temp[i]<<" ";
//     }
//     cout<<"Changed arr by moving zeros to end: ";
//     for (int i = 0; i < size; i++)
//     {
//         nums[i]=temp[i];
//         cout<<nums[i]<<" ";
//     } 

// }
// THE OPTIMAL APPROACH WHERE TC=O(N) AND SC=O(1)
void movetoend(int nums[],int size){
    int j=-1; 
    for(int i = 0; i < size; i++)
    {
        if(nums[i]==0){
            j=i; // index of first zero element is stored by 'j'
            break;
        }
    }
    if(j==-1){
        cout<<"no zeros found";
        return;
    }
    for (int i = j+1; i < size; i++)
    {
        if(nums[i]!=0){
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            j++;
        }
        
    }
    cout<<"Moving zeros to end: ";
    for (int i = 0; i < size; i++)
    {
        cout<< nums[i]<<" ";
    }

}
int main(){
    int nums[]={2,0,0,1,2};
    int size = sizeof(nums) / sizeof(nums[0]);
    movetoend(nums,size);

}
//one pointer works when nonzero found, and a loop is used to iterate through whole array
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0){
//                 swap(nums[i],nums[j]);
//                 j++;
//             }
//         }

//     }
// };