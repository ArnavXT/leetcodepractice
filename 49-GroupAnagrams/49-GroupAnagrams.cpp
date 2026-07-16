// Last updated: 7/16/2026, 4:39:08 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];

            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        for( auto it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};