// Last updated: 7/16/2026, 4:36:42 PM
class Solution {
public:
    long long maxSumTrionic(vector<int> &nums) {
        int n = nums.size();
        long long s = 0LL, ans = -1e14 - 5;
        vector<long long> pref(n, 0LL);
        for(int i = 0; i < n; i++) {
            s += nums[i];
            pref[i] = s;
        }
        vector<int> inc(n, n - 1), dec(n, n - 1);
        for(int i = n - 2; i >= 0; i--) {
            inc[i] = i; dec[i] = i;
            if(nums[i + 1] > nums[i]) inc[i] = inc[i + 1];
            else if(nums[i + 1] < nums[i]) dec[i] = dec[i + 1];

            if(inc[i] - i <= 0) continue;
            if(dec[inc[i]] - inc[i] <= 0) continue;
            if(inc[dec[inc[i]]] - dec[inc[i]] <= 0) continue;
            ans = max(ans, pref[dec[inc[i]]] - ((i - 1 >= 0) ? pref[i - 1] : 0) + 
            max(1LL * nums[dec[inc[i]] + 1], pref[inc[dec[inc[i]]]] - ((dec[inc[i]] - 1 >= 0) ? 
            pref[dec[inc[i]]] : 0))); // huh interesting
        }
        return ans;
    }
};