// Last updated: 7/16/2026, 4:39:31 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i  = 0;
        int j = height.size()-1;
        
        int area = 0;
        while(i<j){
        int w = j - i;
        int h= min(height[i], height[j]);
        area = max(area, w * h);

        if(height[i]>height[j]){
            j--;
        }else i++;
        }
        return area;
    }
    
};