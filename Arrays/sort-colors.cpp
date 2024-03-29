// 3 methods to sort the vector
#include <bits/stdc++.h>
using namespace std;

    void sortColors(vector<int>& nums) {
        //using STL sort
        // sort(nums.begin(),nums.end());
        // counting method
        // int zeros = 0, ones = 0, twos = 0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0)
        //     {
        //         zeros++;
        //     }
        //     else if(nums[i]==1)
        //     {
        //         ones++;
        //     }
        //     else
        //     {
        //         twos++;
        //     }
        // }
        // // overwriting the vector
        // int i=0;
        // while(zeros--){
        //     nums[i++]=0;
          
        // }
        // while(ones--){
        //     nums[i++]=1;
           
        // }
        // while(twos--){
        //     nums[i++]=2;
            
        // }
        // inplace (3 pointers approach)
        int l=0,m=0,h=nums.size()-1;
        while(m<=h){
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else{
                swap(nums[h],nums[m]);
                h--;
            }
            

        }
    }
    int main(){
         vector<int> v;
         v.push_back(2);
         v.push_back(2);
         v.push_back(0);
         v.push_back(1);
         v.push_back(2);
         v.push_back(1);
         v.push_back(1);
         v.push_back(0);
         sortColors(v);
         for (auto it : v)
        {
           cout << it << " "; // 0 0 1 1 1 2 2 2
        }
    }
