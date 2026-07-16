// Last updated: 7/16/2026, 4:36:46 PM
class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
    if(occupiedIntervals.empty()) return {};

        sort(occupiedIntervals.begin(), occupiedIntervals.end());
        vector<vector<int>> merged;
        merged.push_back(occupiedIntervals[0]);

        for (int i = 1; i< occupiedIntervals.size(); i++){
            if(occupiedIntervals[i][0] <= merged.back()[1] + 1){
                merged.back()[1] = max(merged.back()[1], occupiedIntervals[i][1]);
            } else {
                merged.push_back(occupiedIntervals[i]);
            }
        }
        vector<vector<int>> result;
        for(const auto& interval : merged){
            int s1 = interval[0];
            int e1 = min(interval[1], freeStart - 1);
            if(s1 <= e1){
                result.push_back({s1, e1});
            }

            int s2 = max(interval[0], freeEnd + 1);
            int e2 = interval[1];
            if(s2 <= e2){
                result.push_back({s2, e2});
            }
        }
        return result;
    }
};