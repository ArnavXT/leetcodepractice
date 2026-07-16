// Last updated: 7/16/2026, 4:38:04 PM
class Solution {
public:
    bool allZero(vector<int> &counter){
        for(int &x : counter){
            if(x!=0) return false; 
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        vector<int> counter (26,0);
        for(int i = 0; i<p.size(); i++){
            char ch = p[i];
            counter[ch-'a']++;
        }
        int i = 0;
        int j = 0;
        int k = p.size();
        vector<int> ans;
        while(j<n){
            counter[s[j]-'a']--;
            if(j-i+1 ==k){
                if(allZero(counter)) ans.push_back(i);
                counter[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};