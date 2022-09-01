class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        
        int n= p.size();
        
        map<int,vector<vector<int>>>mp;
        
        vector<vector<int>>res;
        
        for(int i=0;i<n;i++){
            int a = (0-p[i][0]),b=(0,p[i][1]);
            a=a*a,b=b*b;
            
            int dist = (a+b);
            
            mp[dist].push_back(p[i]);
            
        }
        
        for(auto &it:mp){
            vector<vector<int>>x = it.second;
            int s = x.size(),i=0;
            
           if(k>0){
               while(i<s){
                   if(k==0) break;
                   res.push_back(x[i]);
                   i++;
                   k--;
               }
           }else{
               break;
           }
            
        }
        return res;
    }
};