// class Solution {
// public:
//     //brute force
//     long long continuousSubarrays(vector<int>& nums) {
//         int n = nums.size();
//         long long count = 0;

//         for(int start=0; start<n;start++){
//             int mini = nums[start];
//             int maxi = nums[start];
//             for(int end = start; end <n; end++){
//                 maxi = max(maxi, nums[end]);
//                 mini = min(mini, nums[end]);
//                 if(maxi - mini <= 2){
//                     //valid
//                     count++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return count;

//     }
// };
class Solution {
public:
    //dynamic sliding window
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        map<int,int> mpp;
        int r = 0, s = 0;
        while(r < n){
            mpp[nums[r]]++;
            while(mpp.rbegin()->first - mpp.begin()->first > 2){
                mpp[nums[s]]--;
                if(mpp[nums[s]] == 0) mpp.erase(nums[s]);
                s++;
            }
            count+=r-s+1;
            r++;
        }
        return count;

    }
};
//usiing 2 monotonic deque
class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int s = 0, n = nums.size();
        long long count =0;
        deque<int> minD,maxD;//for min and max element
        for(int r = 0; r < n ;r++){
            while(!minD.empty() && nums[minD.back()] >= nums[r]) minD.pop_back();//we want mini only 
            while(!maxD.empty() && nums[maxD.back()] <= nums[r]) maxD.pop_back();//we want maxii
            minD.push_back(r);
            maxD.push_back(r);
            while(!minD.empty() && !maxD.empty() && nums[maxD.front()] - nums[minD.front()] > 2){
                // s++;
                if(minD.front() < maxD.front()){
                    s = minD.front()+1;
                    minD.pop_front();

                }
                else{
                    s = maxD.front()+1;
                    maxD.pop_front();
                    
                }

            }
            count += r-s+1;

        }
        return count;
    }
};
