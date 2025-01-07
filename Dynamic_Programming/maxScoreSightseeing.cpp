// https://leetcode.com/problems/best-sightseeing-pair/
//Brute force approach
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
         int maxi = INT_MIN;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(i < j ){
                    maxi = max(maxi, values[i] + values[j] + (i - j));
                }
            }
        }
        return maxi;
    }
};


class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int maxLeft = values[0], res = 0;
        for(int i = 1; i < n; i++){
            res = max(res, maxLeft + values[i] - i);
            maxLeft = max(maxLeft, values[i] + i);
        }
        return res;
    }
};