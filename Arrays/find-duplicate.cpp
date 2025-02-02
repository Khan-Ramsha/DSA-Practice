#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());  
    int ans=-1;
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i]); //treating the element as index       
        if(nums[index]<0){   
            ans=index;
            break;
        }
        nums[index]*=-1; //mark index as neg
    }
    return ans;
    }
int main(){
    vector<int> v{4,3,5,2,2,1};
    int index=findDuplicate(v);
    cout<< index << " ";   //expected output :- 2
}
//Method 2
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n+1,0);
        for(auto it : nums){
            hash[it]++;
            if(hash[it]>1)
            {
                return it;
            }
        }
        
        return 0;
    }
};