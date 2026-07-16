// Last updated: 7/16/2026, 4:39:47 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map <int ,int> res;

        for (int i = 0; i < n; i++){
            int rem = target - nums[i];
            if (res.find(rem) != res.end()){
                return {res[rem],i};
            };
            res[nums[i]] = i;
        }
        return {};
    }

};