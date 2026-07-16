// Last updated: 7/16/2026, 4:39:29 PM
class Solution {
public:
    vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> sym{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string intToRoman(int num) {
        string res = "";
        for (int i = 0; i < 13; i++) {
            int times = num / val[i];
            while (times--) {
                res += sym[i];
            }
            num %= val[i];
        }
        return res;
    }
};
