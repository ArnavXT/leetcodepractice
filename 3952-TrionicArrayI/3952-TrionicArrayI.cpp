// Last updated: 7/16/2026, 4:36:44 PM
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        bool dir = false;
        int count = 0;
        int i=1;
        for(;i<n;i++){
            int a,b;
            a = nums[i-1];
            b = nums[i];
            if(a == b){
                return false;
            }
            if(dir){
                if(a < b){
                    dir = false;
                    count++;
                }
            }
            else{
                if(a > b && i != 1){
                    dir = true;
                    count++;
                }
                else if(i == 1 && a > b){
                    return false;
                }
            }
        }
        if(count == 2){
            return true;
        }
        return false;
    }
};