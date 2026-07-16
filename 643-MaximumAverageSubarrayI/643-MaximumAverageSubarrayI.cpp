// Last updated: 7/16/2026, 4:37:55 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        double sum = 0;
        double max_sum =numeric_limits<double>::lowest() ;
        vector<int> arr;

        while (j < n) {
            sum += nums[j];
            if (nums[j]<n){
                arr.push_back(nums[j]);
            }
            if (j - i + 1 < k) {
                j++;
            } else if (j - i + 1 == k) {
                max_sum = max(max_sum, sum);
                sum -= nums[i];
                i++;
                j++;
            }
        }
        return max_sum/k;
    }
};
