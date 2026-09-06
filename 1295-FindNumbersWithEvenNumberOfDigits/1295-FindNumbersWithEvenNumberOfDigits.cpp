// Last updated: 9/6/2026, 12:31:12 PM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count =  0;
        for (int i=0;i<n;i++){
            string a = to_string(nums[i]);
            if (a.length()%2 == 0)
            count ++;
        }
        return count;
    }
};

