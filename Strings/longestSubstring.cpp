//longest substr without Repeating characters
class Solution {
public://brute force
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        int maxLen=0;
        for(int i=0; i<n;i++){
            set<char> st;
            for(int j=i; j<n;j++)
            {
                if(st.count(s[j])){
                    break;
                }
                st.insert(s[j]);
                maxLen=max(maxLen, j-i+1);

            }
        }
        return maxLen;
    }
};
//optimized -- sliding window
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        int maxLen=0;
        set<char> st;
        int l =0, r= 0;
        while(r < n){
            if(st.count(s[r])){ //or   if(st.find(s[r])!=st.end())
                st.erase(s[l]);
                l++;
            }
            else{
                st.insert(s[r]);
                maxLen=max(maxLen, r-l+1);
                r++;

            }
        }
        return maxLen;
    }
};
