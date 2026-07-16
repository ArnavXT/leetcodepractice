// Last updated: 7/16/2026, 4:39:13 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        int mini=INT_MAX;
        int start=-1;
        for(int i=index+1;i<n;i++)
        {
            if(nums[i]>nums[index]&&nums[i]-nums[index]<=mini)
            {
                mini=nums[i]-nums[index];
                start=i;
            }
        }
        
            swap(nums[index],nums[start]);
        
        sort(nums.begin()+index+1,nums.end());
    }
};