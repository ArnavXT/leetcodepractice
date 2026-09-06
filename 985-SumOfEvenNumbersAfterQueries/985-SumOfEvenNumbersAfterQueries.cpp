// Last updated: 9/6/2026, 12:31:44 PM
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int q = queries.size();
        int sumEven = 0;
        for(int &x : nums){
            if(x%2==0) sumEven += x;
        }

        vector<int> result;

        for(int i = 0; i<q; i++){
            int val = queries[i][0];
            int indx = queries[i][1];

            if(nums[indx]%2==0){
                sumEven -= nums[indx];
            }
            nums[indx]+= val;

            if(nums[indx]%2==0){
                sumEven += nums[indx];
            }

            result.push_back(sumEven);
        }
        return result;
    }
};