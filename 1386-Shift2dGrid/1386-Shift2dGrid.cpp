// Last updated: 8/26/2026, 10:00:55 AM
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> temp;
        for(int i = 0; i<n; i++){
                for(int j = 0; j<m; j++){
                    temp.push_back(grid[i][j]);
                }
            }
        int l = temp.size();
        k= k%l;
        vector<int> shift(l);
        for(int i = k; i<l; i++){
            shift[i] = temp[i-k];
        }
        for(int i = 0; i<k; i++){
            shift[i] = temp[l+i-k];
        }
        int x = 0;
        vector<vector<int>> ans(n, vector<int>(m));

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                ans[i][j] = shift[x++];
            }
        }
        return ans;
    }
};