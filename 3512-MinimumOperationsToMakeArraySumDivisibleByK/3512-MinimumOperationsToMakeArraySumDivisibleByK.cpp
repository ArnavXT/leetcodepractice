// Last updated: 9/6/2026, 12:29:19 PM
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