// Last updated: 7/16/2026, 4:39:22 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for( char &ch : s ){
            if(ch == '(')
                st.push(')');
            else if (ch == '{')
                st.push('}');
                else if (ch == '[')
                    st.push(']');
                    else if (st.empty() || st.top() != ch)
                        return false;
                            else 
                                st.pop();
        }

        return st.empty();
    }
};