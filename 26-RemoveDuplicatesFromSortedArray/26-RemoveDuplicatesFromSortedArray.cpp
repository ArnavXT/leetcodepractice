// Last updated: 7/16/2026, 4:39:17 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;

        while (j<n){
            if(nums[i] != nums[j]){
                i++;
            nums[i] = nums[j];
            }
            j++;
        }
        return i + 1;
    }
};