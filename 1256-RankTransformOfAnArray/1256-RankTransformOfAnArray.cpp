// Last updated: 7/16/2026, 4:37:27 PM
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        int res = 0;
        sort(temp.begin(), temp.end());
        int n = arr.size();

        temp.erase(unique(temp.begin(), temp.end()), temp.end());



        for(int i = 0; i<n; i++){
            arr[i] = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin() + 1;
        }
        return arr;
    }
};