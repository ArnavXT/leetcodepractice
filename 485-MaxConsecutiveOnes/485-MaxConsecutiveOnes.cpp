// Last updated: 7/16/2026, 4:38:02 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        int maxstr = 0;
            for(int i = 0; i< n; i++){
                if (nums[i] == 1){
                    curr++;
                    maxstr =  max (maxstr,curr);
                }else {
                    curr = 0;
                }
            }
    return maxstr;
    }
};