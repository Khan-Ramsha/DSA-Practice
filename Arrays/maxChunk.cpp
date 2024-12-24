//Prefix sum
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        // since the array element lies in range [0 , n-1] but in random order
        //lets maintain the sorted version of array and the keep calculating
        // the sum of sorted and original , when sum for both (sorted & original)
        //becomes equal upto certain index , then its considered to be a valid chunk
        int prefix = 0, sortedPrefix = 0, chunk = 0;
        for(int i = 0; i < arr.size(); i++){
            prefix += arr[i];
            sortedPrefix += i;
            if(sortedPrefix == prefix) chunk++;
        }
        return chunk;
    }
};

//Monotonic Stack : 
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> monoStack;
        for(int i = 0; i < arr.size(); i++){
            if(monoStack.empty() || arr[i] > monoStack.top()) monoStack.push(arr[i]);
            else{
                int maxEle = monoStack.top();//store the max element
                while(!monoStack.empty() && arr[i] < monoStack.top()){
                    monoStack.pop();//pop all the element from the stack until stack is empty
                }
                monoStack.push(maxEle);
            } 
        }
        return monoStack.size();
    }
};

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
    
        int  chunk = 0;
        int maxi = -1;
        for(int i = 0; i < arr.size(); i++){
            maxi = max(arr[i], maxi);
            if(i == maxi) chunk++;
        }
        return chunk;
    }
};
//https://leetcode.com/problems/max-chunks-to-make-sorted-ii/description/
// 1st approach:-  Monotonic Stack
// 2) class Solution {
// public:
//     int maxChunksToSorted(vector<int>& arr) {
//         vector<int> orArr=arr;
//         int sortedPref = 0, Pref = 0, count = 0;
//         sort(arr.begin(), arr.end()); //nlogn
//         for(int i = 0; i < arr.size(); i++){ //O(n)
//             sortedPref += arr[i];
//             Pref += orArr[i];
//             if(Pref == sortedPref){
//                 count++;
//             }
//         }
//         return count;
//     }
// };



