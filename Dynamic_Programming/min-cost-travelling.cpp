//https://leetcode.com/problems/minimum-cost-for-tickets/
//Recursion
class Solution {
public:
    unordered_set<int> travelDays;
    int f(int curr, vector<int>& days, vector<int>& costs){
        //base case;
        if(curr > days[days.size() - 1]) return 0;
        //step 1 is to check whether curr day is the day we need to travel by having a check in days array
        if(travelDays.find(curr) == travelDays.end()){
            //this is the rest day
            return f(curr + 1, days, costs);
        }
        int one = costs[0] + f(curr + 1, days, costs);
        int seven = costs[1] + f(curr + 7, days, costs);
        int thirty = costs[2] + f(curr + 30, days, costs);
        return min(one, min(seven, thirty));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        for(auto it: days){
            travelDays.insert(it);
        }
        return f(1, days, costs);
    }
};

//memo

class Solution {
public:
    unordered_set<int> travelDays;
    int f(int curr, vector<int>& days, vector<int>& costs, vector<int>& dp){
        //base case;
        if(curr > days[days.size() - 1]) return 0;
        //step 1 is to check whether curr day is the day we need to travel by having a check in days array
        if(travelDays.find(curr) == travelDays.end()){
            //this is the rest day
            return f(curr + 1, days, costs, dp);
        }
        if(dp[curr] != -1) return dp[curr];
        int one = costs[0] + f(curr + 1, days, costs, dp);
        int seven = costs[1] + f(curr + 7, days, costs, dp);
        int thirty = costs[2] + f(curr + 30, days, costs, dp);
        return dp[curr] = min(one, min(seven, thirty));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days[days.size() - 1] + 1, -1);
        for(auto it: days){
            travelDays.insert(it);
        }
        return f(1, days, costs, dp);
    }
};


//Bottom up approach
class Solution {//Iterative DP
public:
    int f(int curr, vector<int>& days, vector<int>& costs, vector<int>& dp){
        int ptr = 0;
        //step 1 is to check whether curr day is the day we need to travel by having a check in days array
        for(int i = 1; i <=  days[days.size() - 1]; i++){
            //the loop iterates over all days from 1 to lastTravelDay
            if(i < days[ptr]) dp[i] = dp[i - 1];
            else{
                int one = dp[i - 1] + costs[0];
                int seven = dp[max(0,(i - 7))] + costs[1];
                int thirty =  dp[max(0,(i - 30))]  + costs[2];// Use 'max' to avoid including negative indices
                dp[i] = min({one, seven , thirty});
                ptr++;
            }
            if(ptr > days.size() - 1) break;
        }
        return dp[days[days.size() - 1]];//days[days.size() - 1] is the last day of travel
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days[days.size() - 1] + 1, 0);
        return f(1, days, costs, dp);
    }
};