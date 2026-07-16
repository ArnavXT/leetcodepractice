// Last updated: 7/16/2026, 4:38:39 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() < 2){
            return nums[0];
        }
        int maj = (nums.size() + 2 - 1) / 2;

        sort(nums.begin(), nums.end());
        int count = 1;
        int final = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1]){
                cout << nums[i] << " " << count << endl;
                count += 1;
            }else{
                count = 1;
            }
            if(count >= maj){
                final = nums[i];
                break;   
            }    
        }
        return final;
    }
};