// //brute force approach. Time complexity - O(n^2)
#include <iostream>
#include <vector>
using namespace std;


// void repeated_missing(int a[], int size) {   
//     int missing = -1;
//     int repeating = -1;

//     for (int i = 1; i <= size; i++) {
//         int count = 0;

//         for (int j = 0; j < size; j++) {
//             if (a[j] == i) {
//                 count++;
//             }
//         }

//         // Determine if i is missing or repeating
//         if (count == 0) {
//             missing = i;
//         } else if (count > 1) {
//             repeating = i;
//         }

//         // If both missing and repeating are found, no need to continue
//         if (missing != -1 && repeating != -1) {
//             break;
//         }
//     }

//     // Print the missing and repeating numbers
//     cout << "Missing: " << missing << ", Repeating: " << repeating << endl;
// }

// int main() {
//     int a[] = {2,3,5,5,6,1};
//     int size = sizeof(a) / sizeof(a[0]);

//     repeated_missing(a, size);

//     return 0;
// }
// Optimization adding to above code:
// time complexity- O(n) But space complexity is also- O(n) for below code

// void findMissingRepeatingNumbers(vector <int> a,int size) {
//     // Write your code here
//     int n=a.size();
//     int hash[n + 1] = {0};
    
//     for (int i = 0; i < n; i++) { // the time complexity of this loop is O(n)
//         hash[a[i]]++;
//     }
//     int repeating,missing=-1;
//     for(int i=1;i<=n;i++){  // the time complexity of this loop is O(n)
//         if(hash[i]==2){
//             repeating=i;
//         }
//         else if(hash[i]==0){
//             missing=i;
//         }
//     } // the time complexity = O(n)+O(n)=O(2n) considered as O(n)
//     // return {repeating,missing};
//     cout<<repeating<<","<<missing;
// }

// int main() {
//     vector<int> a = {2,3,5,5,6,1};
//     int size = sizeof(a) / sizeof(a[0]);
//     findMissingRepeatingNumbers(a,size);
    
//     return 0;
// }
// in the above code we are utilizing the extra space for hash array, so code need to be optimized

// Optimizing the above code again (no extra space required except long long, note: using long long because the value might overflow by calculating sum of square)
void findMissingRepeatingNumbers(vector <int> a) {
    // Write your code here
    
    long long n=a.size();
    
    long long SN=(n*(n+1))/2; // sum of n natural numbers 
    long long S2N= (n*(n+1)*(2*n+1)) / 6; //Sum of squares of n natural numbers
    long long S=0,S2=0;
    for(int i=0;i<n;i++){
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    long long val1= S-SN; // two eqns
    long long val2= S2-S2N;
    val2 = val2/val1; 
    long long x= (val1+val2)/2;
    long long y=x-val1;
    cout<<(int)x<<","<<(int)y;
}
 int main() {
    vector<int> a = {2,3,5,5,6,1};
    findMissingRepeatingNumbers(a);
    return 0;
}

