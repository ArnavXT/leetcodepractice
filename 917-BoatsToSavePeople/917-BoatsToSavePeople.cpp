// Last updated: 7/16/2026, 4:37:45 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int l = 0, r = n-1, res = 0;
        sort(people.begin(), people.end());
        while(l<=r){
            int s = people[l]+people[r];
            if(s<=limit){
                l++; r--; res++;
            }else {
                res++; r--;
            }
        }
        return res;
    }
};