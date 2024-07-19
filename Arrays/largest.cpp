// code to find largest element
//easy problem

// BRUTE FORCE APPROACH IS TO SORT THE ARRAY AND THEN RETURN SIZE-1 I.E THE LARGEST ELEMENT, WHICH TAKES O(N.LOG N)
// BETTER SOL IS TO CONSIDER FIRST ELEMT AS LARGEST THEN ITERATE THROUGH WHOLE ARRAY AND COMPARE FIRST ELEMENT IF FIRST ELEMTN IS LESS THAN THE CURR REPLACE IT WITH CURR,
//THATS HOW U UPDATE LARGEST WITH THE LARGE NUMBER IN AN ARRAY BY ITERATING AND COMPARING IT WITH ARRAY ELEMENTS.
//

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest=arr[0];
        for(int i=0;i<n;i++){
            if(largest<arr[i])
            {
                largest=arr[i];
            }
        }
        return largest;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends

