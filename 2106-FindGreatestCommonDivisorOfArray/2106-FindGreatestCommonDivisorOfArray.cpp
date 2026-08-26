// Last updated: 8/26/2026, 10:00:21 AM
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = 1001;
        int max = 0;

        for(int i = 0; i < nums.size(); i++){
            if (nums[i]> max) max = nums[i];
            if(nums[i]< min) min = nums[i];
        }
        return gcd(min, max);
    }
};