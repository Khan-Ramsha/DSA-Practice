// implementing kth largest element without sorting using min heap
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void kth_largest(int a[], int k, int n){
    
        priority_queue<int , vector<int>, greater<int>> queue;
        // By default priority_queue<int> creates max heap, To create min heap above line is written i.e greater<int>
        
        for(int i=0;i<k;i++){
            queue.push(a[i]);
        }
        for(int i=k;i<n;i++){
            if(a[i]>queue.top()){
                queue.pop();
                queue.push(a[i]);
            }

        }
        cout<< queue.top() <<"";

        
    
}

int main(){
    int a[] = {1, 3, 5, 3, 4};
    int k=3;
    int n = sizeof(a) / sizeof(int);
    kth_largest(a,k,n);
}
// another method
// for(int i=0;i<n;i++){
//             queue.push(nums[i]);
//         }
//         // biggest element gets the higher priority and gets popped first
//         for(int i=0;i<k-1;i++){
//             queue.pop();
//         }
//         return queue.top();
       