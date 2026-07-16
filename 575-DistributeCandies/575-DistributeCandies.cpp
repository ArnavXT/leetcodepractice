// Last updated: 7/16/2026, 4:37:59 PM
class Solution {
public:
    int distributeCandies(vector<int>& n) {
        sort(begin(n), end(n));
        vector<int> uni;
        uni.push_back(n[0]);
        int num = n.size();
        for (int i = 1; i < num; i++) {
            if (n[i] != n[i - 1]) {
                uni.push_back(n[i]);
            }
        }
        int u = uni.size();
        return min(u, num / 2);
    }
};
