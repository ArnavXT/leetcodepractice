// Last updated: 7/18/2026, 1:01:00 PM
1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int min = 1001;
5        int max = 0;
6
7        for(int i = 0; i < nums.size(); i++){
8            if (nums[i]> max) max = nums[i];
9            if(nums[i]< min) min = nums[i];
10        }
11        return gcd(min, max);
12    }
13};