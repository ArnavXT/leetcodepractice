// Last updated: 7/16/2026, 4:38:56 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<= 2) return n;
        int i = 0;
        int j = 1;
        int count = 1;

        while (j<n){
            if(nums[i] != nums[j]){
                count = 1;
                i++;
            nums[i] = nums[j];
            }
            else if (count < 2) {
                count++;
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i + 1;
    }
};