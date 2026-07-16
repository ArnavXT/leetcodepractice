// Last updated: 7/16/2026, 4:38:45 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for (int val : nums){
            ans ^=val;
        }
        return ans ;
    }
};