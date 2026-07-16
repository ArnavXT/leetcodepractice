// Last updated: 7/16/2026, 4:37:18 PM
class Solution {
public:
    int xorOperation(int n, int start) {
        int res=0;
        for (int i = 0;i<n;++i){
            res = res^start+2*i;
        }
        return res;
    }
};