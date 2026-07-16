// Last updated: 7/16/2026, 4:36:38 PM
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        if (nums.size() < 2) {
            return 0;
        }
        int max_val = *std::max_element(nums.begin(), nums.end());
        int min_val = *std::min_element(nums.begin(), nums.end());
        long long best_single_value = (long long)max_val - min_val;
        
        return (long long)k * best_single_value;
    } 
};