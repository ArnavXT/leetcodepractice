// Last updated: 9/6/2026, 12:28:59 PM
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