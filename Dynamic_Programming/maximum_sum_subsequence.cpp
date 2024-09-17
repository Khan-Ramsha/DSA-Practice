// Recursive approach
// class Solution{
// 	public:
// 	int f(int ind, int prev, int arr[], int n){
// 	    //Base case
// 	    if(ind == n) return 0;
// 	    // we have 2 options 
// 	    // Option 1- not take the element
// 	    int notTake = f(ind+1, prev, arr, n);
// 	    //Option 2- take the element
// 	    int take=0;
// 	    if(prev == -1 || arr[ind] > arr[prev]){
// 	        take = arr[ind] + f(ind+1, ind, arr, n);
// 	    }
	    
// 	    return max(take,notTake);
// 	}
// 	int maxSumIS(int arr[], int n)  
// 	{  
// 	    // Your code goes here
// 	    return f(0,-1,arr,n);
	    
// 	}  
// };

//Memoization
// class Solution{
// 	public:
// 	int f(int ind, int prev, int arr[], int n,vector<vector<int>> &dp){
// 	    //Base case
// 	    if(ind == n) return 0;
// 	    // if the ans is alreadyy calculated return it.
// 	    if(dp[ind][prev+1] != -1) return dp[ind][prev+1];
// 	    // we have 2 options 
// 	    // Option 1- not take the element
// 	    int notTake = f(ind+1, prev, arr, n,dp);
// 	    //Option 2- take the element
// 	    int take=0;
// 	    if(prev == -1 || arr[ind] > arr[prev]){
// 	        take = arr[ind] + f(ind+1, ind, arr, n,dp);
// 	    }
	    
// 	    return dp[ind][prev+1]=max(take,notTake);
// 	}
// 	int maxSumIS(int arr[], int n)  
// 	{  
// 	    // Your code goes here
// 	    vector<vector<int>> dp(n,vector<int>(n+1,-1));
// 	    return f(0,-1,arr,n,dp);
	    
// 	}  
// };
//Space optimization

// class Solution{

// 	public:
// 	int maxSumIS(int arr[], int n)  
// 	{  
// 	    // Your code goes here
// 	    vector<int> dp(n);
// 	    for (int i = 0; i < n; ++i) 
// 	    {
//             dp[i] = arr[i];
	        
// 	    }
    
// 	    for(int i=1;i<n; i++){
// 	        for(int j=0;j<i;j++){
// 	            if(arr[i] > arr[j] && dp[i] < dp[j] + arr[i]){
// 	                dp[i] = dp[j] + arr[i];
// 	            }
// 	        }
// 	    }
// 	    return *max_element(dp.begin(),dp.end());
	    
// 	}
// };