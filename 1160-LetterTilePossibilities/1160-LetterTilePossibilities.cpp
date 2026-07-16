// Last updated: 7/16/2026, 4:37:29 PM
class Solution {
private:
    int backtrack(vector<int>& freq) {
        int ways = 0;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] > 0) {
                freq[i]--;
                ways += 1 + backtrack(freq);
                freq[i]++;
            }
        }
        return ways;
    }

public:
    int numTilePossibilities(string tiles) {
        vector<int> freq(26, 0);
        for (char c : tiles) {
            freq[c - 'A']++; 
        }
        return backtrack(freq);
    }
};