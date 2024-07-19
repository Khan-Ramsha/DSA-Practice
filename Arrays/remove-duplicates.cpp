//  REMOVE DUPLICATES FROM SORTED ARRAY
#include <iostream>
#include <vector>
#include <set>
using namespace std;

// BRUTE FORCE APPROACH WHERE PUTTING THE ELEMENTS IN THE SET(CONTAINS UNIQUE ELEMNTS) AND THEN PUTTING THE ELEMENTS IN THE ARRAY AGAIN
//Time Complexity=Nlogn+N
//Space C= O(N)
int removeDuplicates(vector<int>& nums) {
    set <int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    int index=0;
    for (auto it:st)

    {
        nums[index]=it;
        index++;
    }
    return index;
    
    
}

int main(){
    vector<int> nums={1,1,2,2,2,3,3,4,5,6};
    int ans=removeDuplicates(nums);
    cout<<ans;
}


// OPTIMAL APPROACH - TC= O(N), SC= O(1)


int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
int main(){
    vector<int> nums={1,1,2,2,2,3,3,4,5,6};
    int ans=removeDuplicates(nums);
    cout<<ans;
}