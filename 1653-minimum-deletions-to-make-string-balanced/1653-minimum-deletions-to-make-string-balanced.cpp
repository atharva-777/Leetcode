class Solution {
public:
    int minimumDeletions(string s) {
        int res = 0;
        stack<int>st;
        
        for(auto it = s.rbegin();it!=s.rend();++it){
            char curr = (*it);
            if(!st.empty() && st.top()<curr){
                res++;
                st.pop();
            }
            else{
                st.push(curr);
            }
        }
        return res;
    }
};