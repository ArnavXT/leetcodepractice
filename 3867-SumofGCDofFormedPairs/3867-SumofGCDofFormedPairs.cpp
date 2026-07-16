// Last updated: 7/16/2026, 11:56:19 PM
1class Solution {
2public:
3    long long gcdSum(vector<int>& nums) {
4        int n = nums.size();
5        int mx = 0;
6        for(int i = 0; i < n; i++){
7            if (nums[i]>mx) mx = nums[i];
8            nums[i] = gcd(mx, nums[i]);
9
10        }
11
12        sort(nums.begin(), nums.end());
13        int l = 0;
14        int h = n -1;
15        long long result =0;
16        while(l < h){
17            result += gcd(nums[l], nums[h]);
18            l++; h--;    
19            }
20        return result;
21    }
22};