// Last updated: 7/16/2026, 4:39:06 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int left = 0;
        int top = 0;
        int right = matrix[0].size() -1;       
        int bottom = matrix.size() -1;

        // left to right
        while(top<=bottom && left <= right){
            for(int i = left; i <= right; i++){
                res.push_back(matrix[top][i]);
            }
            top++;

            // right column top to bottom
            for(int i = top; i <= bottom; i++){
                res.push_back(matrix[i][right]);
            }
            right--;

            // bottom row right to left
            if(top<=bottom){
            for(int i = right;i >= left; i--){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

            // left column bottom to top;
            if(left<=right){
            for(int i = bottom; i >= top; i--){
                res.push_back(matrix[i][left]);
            }
            left++;
        }
    }
        return res;
    }
};