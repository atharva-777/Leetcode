class Solution {
public:
    string removeStars(string s) {
        
        int n = s.length();
        
        stack<int>st;
        
        for(auto &c:s){
            if(c=='*'){
                st.pop();
            }else{
                st.push(c);
            }
        }
        
        string res;
        
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        
        reverse(res.begin(),res.end());
        
        return res;
        
    }
};