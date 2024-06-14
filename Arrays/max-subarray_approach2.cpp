// Using slightly optimized solution
/// Time complexity: O(n^2)
#include <iostream>
using namespace std;
void maxSubArray(int *arr,int n){
    int maxSum= INT32_MIN;
    for (int start = 0; start < n; start++){
        int currSum=0;
        for (int end = start; end < n; end++)
        {
            currSum+=arr[end];
            
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
    }  
    cout << "Max array sum: " << maxSum << " ";


}

int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxSubArray(arr,n);

}