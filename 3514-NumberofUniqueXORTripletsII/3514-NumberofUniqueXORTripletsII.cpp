// Last updated: 7/24/2026, 9:44:06 PM
1class Solution {
2public:
3    int uniqueXorTriplets(vector<int>& nums) {
4        const int M=2048;
5        vector<vector<int>> dp(4,vector<int>(M));
6        dp[0][0]=1;
7        for(int t=0;t<3;t++){
8            for(int x=0;x<M;x++){
9                if(!dp[t][x]) continue;
10                for(int v:nums) dp[t+1][x^v]=1;
11            }
12        }
13        int ans=0;
14        for(int x=0;x<M;x++){
15            if(dp[3][x]) ans++;
16        }
17        return ans;
18    }
19};