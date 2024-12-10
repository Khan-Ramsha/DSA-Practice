// left rotate an array by k places
// TIME COMPLEXITY- O(N), SPACE COMPLEXITY-O(N)
#include <bits/stdc++.h>
using namespace std;
void leftrotate(int a[],int size,int k){
    k=k%size;

    int temp[k]; 
    for (int i = 0; i < k; i++) // putting the first k elements to a temp arr
    {
        temp[i]=a[i];
    }
    for (int i = k; i < size; i++)  // shifting elements by k
    {
        a[i-k]=a[i];
    }
   
    for (int i = size-k ; i < size; i++)// putting temp arr elements at the back of original arr
    {
        a[i]=temp[i-(size-k)];
    }
    // int j=0;
    // for (int i = size-k ; i < size; i++)// another way of putting temp arr elements at the back of original arr
    // {
    //     a[i]=temp[j];
    //     j++;
    // }
    
    for (int i = 0; i < size; i++)
    {
        cout<< a[i]<<" ";
    }
    

    

}
int main(){

    int a[] = {1, 2, -3, 4, -5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int k=10;
    leftrotate(a,n,k);
    return 0;
}
//rotating right by k positions
// class Solution {
// public: 
//     void rotate(vector<int>& arr, int k) {
//         int n = arr.size();
//         int p=0;
//         int temp[k];
//         for(int i = n-k; i<n ;i++){
//             temp[p++]=arr[i];
//         }
//         for(int i=n-k-1;i>=0;i--){
//             arr[i+k]=arr[i];
//         }
//         for(int i=0;i<k;i++){
//             arr[i]=temp[i];
//         }
//     }
// };
//rotating left by k pos
// class Solution {
// public:
//     void rotate(vector<int>& arr, int k) {
//         int n = arr.size();
//         int p=0;
        
//         int temp[k];
//         for(int i =0; i<k ;i++){
//             temp[i]=arr[i];
//         }
//         for(int i=k;i<n;i++){
//             arr[i-k]=arr[i];
//         }
//         for(int i=n-k;i<n;i++){
//             arr[i]=temp[p++];
//         }
//     }
// };
