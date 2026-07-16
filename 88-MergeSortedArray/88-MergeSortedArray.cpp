// Last updated: 7/16/2026, 4:38:52 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i<n; i++){
            nums1[m+i]=nums2[i];
        }
        sort(begin(nums1), end(nums1));
        for(int x : nums1) cout<<x<<" ";
    }
};