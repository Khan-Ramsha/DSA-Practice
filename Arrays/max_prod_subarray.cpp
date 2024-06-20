
// below code couldnt pass test case- [0,10,10,10,10,10,10,10,10,10,-10,10,10,10,10,10,10,10,10,10,0]  
// class Solution { 
// public: 
//     int maxProduct(vector<int>& nums) { 
//         long long prefix=1,suffix=1; 
//         long long ans=INT_MIN; 
//         for(int i=0;i<nums.size();i++){ 
//             if (prefix == 0) prefix = 1; 
//             if (suffix == 0) suffix = 1; 
             
//             prefix = prefix * nums[i]; 
//             suffix = suffix * nums[nums.size()-i-1]; 
//             ans=max(ans,max(prefix,suffix)); 
             
            
//         } 
//         int a=int(ans); 
//         return a; 
//     } 
     
// };
// passes all the Test case
//     class Solution {
// public:
//     int maxProduct(vector<int>& nums) {

//         double prefixProduct = 1;
//         double suffixProduct = 1;

//         int ans = INT_MIN;

//         for(int i=0;i<nums.size();i++){
            
//             if(prefixProduct==0) prefixProduct = 1;
//             if(suffixProduct==0) suffixProduct = 1;

//             prefixProduct *= (nums[i]);
//             suffixProduct *= (nums[nums.size()-i-1]);

//             double temp = prefixProduct;
//             if(prefixProduct < suffixProduct) temp = suffixProduct;
//             if(ans < temp) ans = temp;

//         }

//         return ans;
//     }
// };

