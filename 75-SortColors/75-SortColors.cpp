// Last updated: 7/16/2026, 4:38:57 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int k = nums.size()-1;

        while (j<=k){
            if (nums[j] == 1){
                j++;
            }
            else if (nums[j] == 0){
                swap(nums[j], nums[i]);
                j++;
                i++;
            }
            else {
                swap(nums[j],nums[k]);
                k--;
            }
        }
    }
};