class Solution {
public:
    int minSwaps(string str) {
        
        int cnt=0;
        
        stack<char>s;
        
        for(auto &it:str){
            if(it=='['){
                s.push(it);
            }else{
                if(!s.empty()){
                    s.pop();
                }else{
                    cnt++;
                }
            }
        }
        return (cnt+1)/2;
    }
};