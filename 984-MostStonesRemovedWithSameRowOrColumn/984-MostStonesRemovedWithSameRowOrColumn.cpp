// Last updated: 7/16/2026, 4:37:42 PM
class Solution {
public:

    int find_(int i,vector<int>&v){
        if(v[i]==i){
            return i;
        }
        v[i]=find_(v[i],v);
        return v[i];
    }

    void union_(int i,int j,vector<int>&v,vector<int>&siz){
        int x=find_(i,v);
        int y=find_(j,v);
        if(x!=y){
            if(siz[x]<siz[y]){
                swap(x,y);
            }
            v[y]=x;
            siz[x]+=siz[y];
        }
    }

    int removeStones(vector<vector<int>>& s) {
        vector<int>v(s.size());
        vector<int>siz(s.size());
        
        unordered_map<int,vector<int>>row;
        unordered_map<int,vector<int>>col;
        int ans=0;
        
        for(int i=0;i<s.size();i++){
            v[i]=i;
            siz[i]=1;
            row[s[i][0]].push_back(i);
            col[s[i][1]].push_back(i);
        }
        for(auto i:row){
            int k=i.second[0];
            for(int j:i.second){
                union_(k,j,v,siz);
            }
        }
        for(auto i:col){
            int k=i.second[0];
            for(int j:i.second){
                union_(k,j,v,siz);
            }
        }
        set<int>set;
        for(int i:v){
            set.insert(find_(i,v));
        }
        return s.size()-set.size();
    }
};