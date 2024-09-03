
// #include <bits/stdc++.h>
// using namespace std;
// //brute force approach
// int longest_subarr(int *arr, int n, int k) {
//     int len = 0;

//     for (int i = 0; i < n; i++) {
//         int sum = 0;

//         for (int j = i; j < n; j++) {
//             sum += arr[j]; 
//             if (sum == k) {
//                 len = max(len, j - i + 1);  
//             }
//         }
//     }

//     return len;
// }
// int main(){

//     int a[] = {1,1,1,1,4,3,2};
//     int n = sizeof(a) / sizeof(a[0]);
//     int res=longest_subarr(a,n,3);
//     cout<<res<<" ";
//     return 0;
    
// }

//positives and neg
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        
        map<long long,int> preSum;
        long long sum=0;
        int maxLen=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                maxLen=max(maxLen,i+1);
                
            }
            long long rem=sum-K;
            if(preSum.find(rem) != preSum.end()){
                int len=i-preSum[rem];
                maxLen=max(maxLen,len);
            }
            if(preSum.find(sum)==preSum.end()){
                {
                    preSum[sum]=i;
                    
                }
            }
        }
        return maxLen;
    } 
    

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends


// posiitves and zeros

int longestSubarrayWithSumK(vector<int> nums, long long k) {
    // Write your code here
 
    int left=0;
    int right=0;
    long long sum=nums[0];
    int maxLen=0;
    int n=nums.size();

    while(right < n){
        while(left <= right && sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right - left + 1);

        }
        right++;
        if(right<n){
            sum+=nums[right];
        }
    }
    return maxLen;

}
