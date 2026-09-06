// Last updated: 9/6/2026, 12:31:01 PM
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