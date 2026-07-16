// Last updated: 7/16/2026, 4:37:43 PM
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> basket;
        int n = fruits.size();
        int left = 0;
        int right = 0;
        int maxlen = 0;
        while(right < n){
                basket[fruits[right]]++;
                while(basket.size() > 2){
                        basket[fruits[left]]--;
                    if (basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]);
                    }
                    left++;
                }
                        maxlen = max(maxlen, right - left + 1);
                            right++;
        }
        return maxlen;
    }
};