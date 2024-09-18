// // Pseudo code
// int low=min of the array
// int high=summ of the array
// int res=-1
// while(low<=high){
//     mid=(low+high)>>1;
//     if(isPossible(mid)){
//         res=mid;
//         high=mid-1;
//     }
//     else{
//         low=mid+1;
//     }
// }
// bool isPossible(int barrier){
//     allocateStud=1, pages=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>barrier){
//             return false;
//         }
//         if(arr[i]+pages>barrier){
//             allocateStud++;
//             pages+=arr[i];
//         }
//         else{
//             pages+=arr[i];
//         }
//     }
//     if(allocateStud > k){
//         return false;
//     return true;
//     }
// }