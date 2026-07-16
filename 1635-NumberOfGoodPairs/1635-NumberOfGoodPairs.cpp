// Last updated: 7/16/2026, 4:37:14 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0;i<n;i++){
            for (int j = 0;j<n;j++){
                if(i<j && nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count++;    
        
    }
};