// Last updated: 7/16/2026, 4:37:04 PM
class Solution {
public:
    int countHillValley(vector<int>& nums){
        int count = 0;
        int n = nums.size(); 
        int high = 0, low = 0;
        for (int i = 1; i<n; i++){
            if (nums[i] != nums[i - 1]){
                int state = (nums[i] > nums[i - 1]);

                if (state && low) count++;
                else if (!state && high) count++;

                high = state;
                low = !state;
            }
        }

        return count;
    }
};
