// Last updated: 9/6/2026, 12:30:36 PM
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