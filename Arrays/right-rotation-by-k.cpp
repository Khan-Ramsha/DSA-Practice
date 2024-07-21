// left rotate an array by k places
// TIME COMPLEXITY- O(N), SPACE COMPLEXITY-O(N)
#include <bits/stdc++.h>
using namespace std;
void reverse(int nums[], int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
void leftrotate(int a[],int size,int k){
    k=k%size;

    // int temp[k]; 
    // for (int i = 0; i < k ; i++) // putting the last k elements to a temp arr
    // {
    //     temp[i]=a[size-k+i];
    // }
    // for (int i = size-1; i >= k; i--)  // shifting elements by k
    // {
    //     a[i] = a[i-k];
    // }
   
    // for (int i = 0; i < k; i++)// putting temp arr elements at the front of original arr
    // {
    //     a[i]=temp[i];
    // }
    
    
    // for (int i = 0; i < size; i++)
    // {
    //     cout<< a[i]<<" ";
    // }
    // ANOTHER APPROACH BY JUST REVERSING
    reverse(a,0,size-1);
    reverse(a,0,k-1);
    reverse(a,k,size-1);
    
    for (int i = 0; i < size; i++)
    {
        cout<< a[i]<<" ";
    }

}
int main(){

    int a[] = {1, 2, -3, 4, -5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int k=2;
    leftrotate(a,n,k);
    return 0;
}

