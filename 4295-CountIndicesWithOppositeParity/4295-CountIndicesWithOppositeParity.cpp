// Last updated: 7/16/2026, 4:36:31 PM
class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,0);
        for(int i = 0;i<n;++i){
            int count = 0;
            for(int j = i+1;j<n;++j){
                if (nums[i]%2 != nums[j] % 2){
                    count++;
                }
            }
            result[i] = count;
        }
        return result;
    }
};