// Last updated: 7/16/2026, 4:38:14 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]!=0){
                swap(nums[j], nums[i]);
                j++;
            }
        }
        //for(int x : nums) return x;
    }
};