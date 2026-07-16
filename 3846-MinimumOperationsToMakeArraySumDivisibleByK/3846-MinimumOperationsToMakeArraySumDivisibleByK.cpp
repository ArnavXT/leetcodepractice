// Last updated: 7/16/2026, 4:36:45 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int num : nums){
        sum += num;
        }
        return sum % k;
    }
};