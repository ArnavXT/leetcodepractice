// Last updated: 7/16/2026, 4:36:54 PM
class Solution {
public:
    int maxDigit (int x){
        int maxdig = 0;
        while(x > 0){
            int digit = x % 10;
            maxdig = max(maxdig, digit);
            x /= 10;
        }
        return maxdig;
    }
    int maxSum(vector<int>& nums) {
        int res = -1;
        int n = nums.size();
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(maxDigit(nums[i]) == maxDigit(nums[j])){
                    int temp = nums[i] + nums[j];
                    res = max(res, temp);
                }
            }
        }
        return res;
    }
};