#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& a, int val) {
        int i=0;
        for(int j=0;j<a.size();j++){
            if(a[j]!=val){
                a[i]=a[j];
                i++;
            }
        }

        return i;
    }
int main(){
    vector<int> nums={1,2,3,4,4,5};
    int ans=removeElement(nums,4);
    cout<<ans;
}