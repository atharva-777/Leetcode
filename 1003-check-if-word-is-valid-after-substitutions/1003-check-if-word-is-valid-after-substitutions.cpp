class Solution {
public:
    bool isValid(string s) {
        
        int i = 0,j = 0;
        
        for(i = 0;i<s.length();i++){
            if(s[i]=='c' && j>1 && s[j-1]=='b' && s[j-2]=='a'){
                j-=2;
            }else{
                s[j++] = s[i];
            }
        }
        return j==0;
    }
};

