class Solution {
public:
    vector<int> findOriginalArray(vector<int>& v) {
        
        int n = v.size();        
        
        sort(v.begin(),v.end());
        
        unordered_map<int,int>mp;
        
        vector<int>res;
        
        if(n&1) return res;
        
        for(auto &it:v){
            mp[it]++;
        }
        
        unordered_map<int,int>::iterator it;
        unordered_map<int,int>::iterator ip;
        
        for(int i=0;i<n;i++){
            it = mp.find(v[i]);
            ip = mp.find(v[i]*2);
            
            if(it->first==0 && it->second==1){
                res.clear();
                return res;
            }
            
            if(it!=mp.end() && ip!=mp.end()){
                
                if(mp[v[i]]>mp[v[i]*2]){
                    res.clear();
                return res;
            }
            //     else{
            //     res.push_back(v[i]);
            //     mp[v[i]*2]--;
            // }
                
                if(mp[v[i]]<=mp[v[i]*2]){
                    if(it->second>0){
                        
                    
                        res.push_back(v[i]);
                        mp[v[i]*2]--;
                        mp[v[i]]--;
                    }
                }
                
            }
            
        }
        
        int s = res.size();
        if(s!=n/2){
            res.clear();
        }
        return res;
    }
};