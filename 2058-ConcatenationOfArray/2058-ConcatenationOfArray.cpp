// Last updated: 7/16/2026, 4:37:06 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(int num: nums){
            ans.push_back(num);
        }
        return ans;
    }
};