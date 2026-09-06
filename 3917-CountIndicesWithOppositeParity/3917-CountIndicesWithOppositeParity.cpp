// Last updated: 9/6/2026, 12:28:34 PM
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