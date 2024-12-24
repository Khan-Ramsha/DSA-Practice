//https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description/

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        for(int i = 0; i < k; i++){
            int minIndex = 0;
            for(int j = 1; j < n; j++){
                if(nums[minIndex] > nums[j]){ 
                    minIndex = j;
                }
            }
            nums[minIndex]=nums[minIndex] * multiplier;
        }
        return nums;
    }
};

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i = 0; i < n; i++){
            pq.push({nums[i], i});
        }
        while(k--){
            auto [top, ind] = pq.top();
            pq.pop();
            top = top * multiplier;
            pq.push({top, ind}); //updating minheap with new value
            nums[ind] = top;//updating original array
        }
        return nums;
    }
};


//Large constraints
// Constraints:

// 1 <= nums.length <= 104
// 1 <= nums[i] <= 109
// 1 <= k <= 109
// 1 <= multiplier <= 106

class Solution {
public:
    int modPow(long mult, int exp, int mod){
        long result = 1;
        while(exp){
            if(exp & 1){
                result *= mult;
                result %= mod;
            }
            mult *= mult;
            mult %= mod;
            exp >>= 1;
        }
        return result;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        const int mod = 1e9 + 7;
        if(multiplier == 1) return nums;
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        const long maxElement = *max_element(nums.begin(),nums.end());
        for(int i = 0; i < n; i++){
            pq.push({nums[i], i});
        }
        while(k>0 && 1LL*multiplier*pq.top().first <= maxElement){
            k--;
            int top = (pq.top().first * multiplier) % mod;
            pq.push({top, pq.top().second});
            pq.pop();
        }
        const long pow = modPow(multiplier, k/n, mod);
        while(!pq.empty()){
            auto [top, ind] = pq.top();
            pq.pop();
            if( k % n){
                k--;
                nums[ind] = (((1ll * multiplier * pow) % mod ) * top) % mod;
            }  
            else nums[ind] = (1ll * pow * top) % mod;
        }
        return nums;
    }
};