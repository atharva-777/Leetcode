class Solution {
public:
    
    bool isValid(vector<char> str){
        int i = 0;
        for(auto &c:str){
            if(c=='('){
                i++;
            }else{
                i--;
            }
            if(i<0){
                return false;
            }
        }
        return (i==0);
    }
    
    void helper(vector<string>&par,int n,int i,vector<char>v){
        if(i==n){
            if(isValid(v)){
                // cout<<"yes\n";
                string res;
                for(auto &c:v){
                    res.push_back(c);
                }
                par.push_back(res);
            }
            return;
        }
        v[i] = '(';
        helper(par,n,i+1,v);
        // p.push_back('(');
        // helper(par,n,i+1,p);
        v[i] = ')';
        helper(par,n,i+1,v);
        // p.push_back(')');
        // helper(par,n,i+1,p);
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string p;
        n*=2;
        helper(res,n,0,vector<char>(n));
        return res;
    }
};