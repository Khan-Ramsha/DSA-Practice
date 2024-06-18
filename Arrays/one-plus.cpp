#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits; // Early return when no carry is needed
            } else {
                digits[i] = 0;
            }
        }
        
        // If we're here, it means all digits were 9, so we need to add a new digit '1' at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
int main(){
 vector<int> nums={7,8,9};
    vector<int> ans=plusOne(nums);
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
}