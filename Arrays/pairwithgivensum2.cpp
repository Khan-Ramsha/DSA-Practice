//find Pair with given sum in a rotated sorted array
// using hash map technique
#include <bits/stdc++.h>
using namespace std;

bool findPairSum(vector<int> arr, int target) {
    int n = arr.size();
    unordered_map<int, int> m;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int b = target - arr[i];
        if (m.find(b) != m.end()) {
            ans += m[b];
        }
        m[arr[i]]++;
    }

    if (ans > 0) {
        return true;
    } else {
        return false;
    }
}


