// Last updated: 7/16/2026, 4:37:40 PM
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
         vector<int> rightMax(n);
         rightMax[n-1] = nums[n-1];
         for(int i = n -2; i >= 0;i--){
            rightMax[i] = max(rightMax[i+1], nums[i]);

        }
        int ramp = 0;
        int i = 0; //nums
        int j = 0; //rightMax

        while(j<n){
            while(i < j && nums[i] > rightMax[j]){ //nums[i <= nums[j] kabhi ho hi nhi payega]
            i++; 
            }
            ramp = max(ramp, j - i);
            j++;
        }
        return ramp;
    }
};