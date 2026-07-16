// Last updated: 7/16/2026, 4:36:37 PM
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            int current_element = nums[i];
            if (current_element % 2 == 0) {
                res |= current_element;
            }
        }
        return res;
    }
};