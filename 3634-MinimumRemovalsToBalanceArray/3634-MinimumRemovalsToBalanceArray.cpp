// Last updated: 9/6/2026, 12:29:07 PM
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n =nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = 1, L=1;
        int maxel = nums[0], minel = nums[1]; 
        while(j<n){
            minel = nums[i];
            maxel = nums[j];
            while(i<j && maxel>(long long)k*minel){
                i++;
                minel = nums[i];
            }
            L = max(L, j-i+1);
            j++;
        }
        return n-L;
    }
};