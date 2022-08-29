class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if(n&1) return false;
        stack<char>st;

        for(auto &c:s){
            if(c=='('){
                st.push(')');
            }
            else if(c=='['){
                st.push(']');
            }
            else if(c=='{'){
                st.push('}');
            }
            else{
                if(st.empty() || c!=st.top()){
                    return false;
                }else{
                    st.pop();
                }
            }
            
        }
        return st.empty();
    }
};