// #include <bits/stdc++.h>
// using namespace std;
// // THE LOGIC
// markRow(i){  // 
//     for(int j=0;j<m;j++){   // O(m)
//         if(arr[i][j]!=0)
//         {
//             arr[i][j]=-1;
//         }
//     }
// }
// markColumn(j){
//     for(int i=0;i<n;i++){  // O(n)
//         if(arr[i][j]!=0){
//             arr[i][j]=-1;
//         }

//     }
// }
// int main(){

// for(int i=0;i<n;i++){   // TC- O(n*m)
//     for(int j=0;j<m;j++){
//         if(arr[i][j]==0){
//             markRow(i);// O(m)
//             markCol(j);  // O(n)
//         }
//     }
// }
// // total TC of above forloops are - O(n*m*(m+n))
// //now initialize those marked -1 to 0
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(arr[i][j]==-1){
//             arr[i][j]=0;
//         }
//     }
// }
// // the above nested loops takes upto O(n*m)
// }
// // the overall TC of this brute approach here is - O(n*m*(m+n)+(n*m)) which is somewhere near about O(n^3) and this is not accepted
// // we then reach to better solution
// //Better soln
// // Just gonna check if atleast a zero occurs then mark that whole row nd column 0 instead of traversing the array and initializing manually.
// int col[m]={0}; // array containing zeros
// int row[n]={0}; 

// for(int i=0;i<n;i++){ //TC-O(n*m)
//     for(int j=0;j<m;j++){
//         if(arr[i][j]!=0){
//             col[i]=1;
//             row[j]=1;
            
//         }
//     }
// }
// // we have successfully marked 1
// for(int i=0;i<n;i++){ //O(n*m)
//     for(int j=0;j<m;j++){
//         if(row[i]==1||row[j]==1){
//             arr[i][j]=0;//set zero
//         }
//     }
// }

// //the time complexity for the better approach is O(2*n*m)
// //Space complexity is o(n) + O(m) for the cols and rows array
// // there is a need to optimize the soln
// //focusing on optimizing the space complexity