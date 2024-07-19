// BRUTE FORCE APPROACH IS TO SORT THE ARRAY AND AS WE KNOW N-1 IS THE LARGEST SO START WITH N-2 WHETHER N-2TH ELEMNT IS LESS THAN LARGES IF YES THE RETURN IT
//BUT THIS TAKES O(N.LOG N)
//BETTER SOL IS TO FIND THE LARGEST ELEMNT BY ITERATING THE ELEMENS WHICH TAKES O(N) TIME AND THEN PUT SECOND LARGEST AS -1 AND RUN A LOOP WHICH UPDATE AND BRINGS ELEMNT LARGER THAN SECOND BUT LESS THAN LARGEST
// TIME COMP = O(N+N)=O(2N)=O(N)
//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    
    int print2largest(int arr[], int n) {
        // code here
        int largest=arr[0];
        int second=-1;
        for(int i=0;i<n;i++){
            if(largest<arr[i])
            {
                largest=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>second && arr[i]<largest){
                second=arr[i];
            }
        }
        return second;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends

// OPtimal solution.
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    
    int print2largest(int arr[], int n) {
        // code here
       if(n<2) return -1;
       int second_largest=INT_MIN;
       int largest=INT_MIN;
       for(int i=0;i<n;i++){
       
           if(arr[i]>largest)
           {
               second_largest=largest;
               largest=arr[i];
               
            }
            else if(arr[i]>second_largest && arr[i]<largest){
                second_largest=arr[i];
            }
        }
        if(second_largest==INT_MIN){
            return -1;
        }
        else{
            return second_largest;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends