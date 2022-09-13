class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        
        int n = target.size();
        
        int res = target[0];
        int c = target[0];
        
        for(int i=1;i<n;i++){
            if(target[i]>c){
                res+=target[i]-c;
                c = target[i];
            }else{
                c = target[i];
            }
        }
        return res;
    }
};