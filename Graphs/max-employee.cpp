// class Solution {
// public:
//     int height(int n,vector<int>&vis,vector<vector<int>> &reverseFav) {
//         vis[n] = 1;
//         int ans=1;
//         for(auto a:reverseFav[n]) {
//             if(vis[a]==0)
//             ans=max(ans,1+height(a,vis,reverseFav));
//         }
//         return ans;
//     }
//     int maximumInvitations(vector<int>& fav) {
//         int n = fav.size();
//         vector<vector<int>> reverseFav(n);
//         for(int i=0;i<n;i++) {
//             if(fav[fav[i]]!=i) {
//                 reverseFav[fav[i]].push_back(i);
//             }
//         }
        
//         int ans2LenCycle=0;
//         for(int i=0;i<n;i++) {
//             if(fav[fav[i]]==i) {
//                 vector<int>vis1(n,0),vis2(n,0);
//                 int x = height(i,vis1,reverseFav);
//                 int y = height(fav[i],vis2,reverseFav);
                
//                 ans2LenCycle+=(x+y);
//             }
//         }
       
//         vector<int> vis(n,0);
//         int maxLenCycle=0;
        
//         for(int i=0;i<n;i++) {
//             int strt = i;
//             int cycleLen=0;
//             while(vis[strt]!=1) {
//                 vis[strt]=1;
//                 strt=fav[strt];
//                 cycleLen++;
//             }
            
//             int strt2 = i;
//             while(strt2!=strt) {
//                 strt2=fav[strt2];
//                 cycleLen--;
//             }
//             maxLenCycle=max(maxLenCycle,cycleLen);
//         }
//         return max(maxLenCycle,ans2LenCycle/2);
//     }
// };