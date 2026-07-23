// Last updated: 7/23/2026, 8:43:15 AM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        int i= 0, j = 0;
5        unordered_set<int> res;
6
7        while (j<nums.size()){
8            if (abs(i - j) > k){
9                res.erase(nums[i]);
10                i++;
11            }
12            if (res.find(nums[j]) != res.end())
13            return true;
14            res.insert(nums[j]);
15            j++;
16        }
17        
18        return false;
19    }
20};