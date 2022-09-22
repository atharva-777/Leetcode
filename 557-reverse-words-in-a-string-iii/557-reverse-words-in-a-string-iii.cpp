class Solution {
public:
    string reverseWords(string s) {
        string str,ans;
        
        s.push_back(' ');
        for(auto &c:s){
            str.push_back(c);
            if(c==' '){
                reverse(str.begin(),str.end());
                ans+=str;
                str.erase();
            }
        }
        
        string res(ans.begin()+1,ans.end());
        return res;
    }
};