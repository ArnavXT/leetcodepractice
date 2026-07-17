// Last updated: 7/17/2026, 6:26:02 PM
1class Solution {
2public:
3    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
4        int maxVal = *max_element(nums.begin(), nums.end());
5
6        vector<long long> freq(maxVal + 1, 0);
7        for (int x : nums)
8            freq[x]++;
9
10        vector<long long> divCnt(maxVal + 1, 0);
11
12        for (int g = 1; g <= maxVal; g++) {
13            for (int x = g; x <= maxVal; x += g)
14                divCnt[g] += freq[x];
15        }
16
17        vector<long long> exact(maxVal + 1, 0);
18
19        for (int g = maxVal; g >= 1; g--) {
20            exact[g] = divCnt[g] * (divCnt[g] - 1) / 2;
21            for (int m = 2 * g; m <= maxVal; m += g)
22                exact[g] -= exact[m];
23        }
24
25        vector<long long> prefix(maxVal + 1, 0);
26        for (int g = 1; g <= maxVal; g++)
27            prefix[g] = prefix[g - 1] + exact[g];
28
29        vector<int> ans;
30
31        for (long long q : queries) {
32            int g = lower_bound(prefix.begin() + 1, prefix.end(), q + 1) - prefix.begin();
33            ans.push_back(g);
34        }
35
36        return ans;
37    }
38};