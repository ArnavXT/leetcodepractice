// Last updated: 7/16/2026, 4:39:02 PM
class Solution {
public:
    string addBinary(string a, string b) {
        int lenA = a.length();
        int lenB = b.length();
        int i=0,carry = 0;
        string ans ="";

        while (i<lenA || i<lenB || carry!=0){
            int x = 0;
            if (i<lenA && a[lenA-i-1]=='1'){
                x=1;
            }
            int y = 0;
            if(i<lenB && b[lenB-i-1]=='1'){
                y=1;  
            }
            ans = to_string((x+y+carry)%2)+ans;
            carry =(x+y+carry)/2;
            i++;
        }
        return ans;

    }
};