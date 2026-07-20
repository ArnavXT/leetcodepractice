// Last updated: 7/20/2026, 10:59:17 PM
1class Solution {
2public:
3    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
4        int n = grid.size();
5        int m = grid[0].size();
6        vector<int> temp;
7        for(int i = 0; i<n; i++){
8                for(int j = 0; j<m; j++){
9                    temp.push_back(grid[i][j]);
10                }
11            }
12        int l = temp.size();
13        k= k%l;
14        vector<int> shift(l);
15        for(int i = k; i<l; i++){
16            shift[i] = temp[i-k];
17        }
18        for(int i = 0; i<k; i++){
19            shift[i] = temp[l+i-k];
20        }
21        int x = 0;
22        vector<vector<int>> ans(n, vector<int>(m));
23
24        for(int i = 0; i<n; i++){
25            for(int j = 0; j<m; j++){
26                ans[i][j] = shift[x++];
27            }
28        }
29        return ans;
30    }
31};