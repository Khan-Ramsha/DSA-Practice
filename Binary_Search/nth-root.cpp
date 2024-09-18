// double multiply(int number, int n) {
//   double ans=1.0;
//   for(int i=0;i<n;i++){
//     ans*=number;
//   }
//   return ans;
// }
// int NthRoot(int n, int m) {
//   // Write your code here.
//   double low=1;
//   double high=m;
//   double eps=1e-6;
//   while((high-low)>eps){
//     double mid=(low+high)/2.0;
//     if (multiply(mid, n) < m) {
//       low=mid;
//     } 
//     else {
//       high=mid;
//     }
//   }
//   int root=round(low);
//    // Verify if the root is correct
//  // Verify if the root is correct
//   if (multiply(root, n) - m < eps) {
//       return root;
//   } 
//   else 
//   {
//         return -1;
//   }


// }