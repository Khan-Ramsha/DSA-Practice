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

