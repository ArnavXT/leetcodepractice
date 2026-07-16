// Last updated: 7/16/2026, 4:38:41 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        
        while( i < j){
            int sum = nums[i] + nums[j];
            if (sum == target){
                return {i + 1, j + 1};
        }else if (sum < target){
            i++;
        }else{
            j--;
        }
        }
        return {-1, -1};
    }
};